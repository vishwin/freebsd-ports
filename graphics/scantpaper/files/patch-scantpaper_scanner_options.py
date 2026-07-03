commit a3c6b805552d64a235b47935f47919ee2b436663
Author: Christoph Moench-Tegeder <cmt@burggraben.net>
Date:   Fri Jul 3 18:58:11 2026 +0200

    Skip empty ("None") options when searching for "source"
    
    The list of options returned by sanes get_options() may contain
    entries without a name set ('None'), which will cause an exception
    to be raised when scanned by re.search() and the whole process
    will fail. As those options are not what we're looking for, just
    skip options where name is None in this loop.
    A similar pattern has been applied in commit 97fa64ee to
    scantpaper/scanner/options.py l.158

diff --git scantpaper/scanner/options.py scantpaper/scanner/options.py
index ed7775f..5ba280e 100644
--- scantpaper/scanner/options.py
+++ scantpaper/scanner/options.py
@@ -60,7 +60,7 @@ class Options(GObject.Object):
             self.source = self.by_name("source")
         else:
             for option in self.array:
-                if re.search(
+                if option.name is not None and re.search(
                     r"source", option.name, re.MULTILINE | re.DOTALL | re.VERBOSE
                 ):
                     self.source = option
