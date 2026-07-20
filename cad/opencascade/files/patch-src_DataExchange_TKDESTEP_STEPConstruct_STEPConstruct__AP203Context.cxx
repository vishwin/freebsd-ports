commit 8a3f204601ddb1cc6063236f53f07e8bf19d9e63
Author: Christoph Moench-Tegeder <cmt@burggraben.net>
Date:   Mon Jun 15 20:51:37 2026 +0200

    Data Exchange - on FreeBSD, check for standard-conforming timezone variable (#1277)
    
    On FreeBSD, "timezone" from time.h only recently started following the
    POSIX/XSI standard. Before that switch, timezone used to be the
    historical BSD function "char *timezone(int, int)", which is
    obviously not what the code here expects.
    
    For older FreeBSDs, provide a workaround using time() and localtime().
    
    The closest __FreeBSD_version increment I could find is 1500019,
    compare
    https://cgit.freebsd.org/src/commit/include/time.h?id=a34940a9756ac8edce36fec176949ee82e9235b4
    and
    https://docs.freebsd.org/en/books/porters-handbook/versions/#versions-15
    
    See https://pubs.opengroup.org/onlinepubs/9799919799/ for official
    POSIX documentation, especially
    - https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/time.h.html
      for time.h
    - https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap02.html#tag_02_01_04
      for X/Open System Interfaces (XSI)
    and also FreeBSD man pages (especially the difference between versions)
    - https://man.freebsd.org/cgi/man.cgi?query=tzset&apropos=0&sektion=0&manpath=FreeBSD+14.4-STABLE&format=html
    - https://man.freebsd.org/cgi/man.cgi?query=tzset&apropos=0&sektion=0&manpath=FreeBSD+15.0-STABLE&format=html
    
    CLA: 1143

diff --git src/DataExchange/TKDESTEP/STEPConstruct/STEPConstruct_AP203Context.cxx src/DataExchange/TKDESTEP/STEPConstruct/STEPConstruct_AP203Context.cxx
index e63c9c9710..ad7ce1c097 100644
--- src/DataExchange/TKDESTEP/STEPConstruct/STEPConstruct_AP203Context.cxx
+++ src/DataExchange/TKDESTEP/STEPConstruct/STEPConstruct_AP203Context.cxx
@@ -64,6 +64,11 @@
   #include <pwd.h>
 #endif
 
+// needed for timezone XSI compatibility check
+#if defined(__FreeBSD__)
+  #include <sys/param.h>
+#endif
+
 //=================================================================================================
 
 STEPConstruct_AP203Context::STEPConstruct_AP203Context()
@@ -112,6 +117,10 @@ occ::handle<StepBasic_DateAndTime> STEPConstruct_AP203Context::DefaultDateAndTim
 #if defined(_MSC_VER) && _MSC_VER >= 1600
     long shift = 0;
     _get_timezone(&shift);
+#elif defined(__FreeBSD__) && __FreeBSD_version < 1500019
+    time_t     time_clock  = time(NULL);
+    struct tm* time_struct = localtime(&time_clock);
+    int        shift       = int(time_struct->tm_gmtoff);
 #else
     int shift = int(timezone);
 #endif
