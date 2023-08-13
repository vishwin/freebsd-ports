--- Modules/socketmodule.h.orig
+++ Modules/socketmodule.h
@@ -89,6 +89,8 @@ typedef int socklen_t;
 #  include <asm/types.h>
 # endif
 # include <linux/netlink.h>
+#elif defined(HAVE_NETLINK_NETLINK_H)
+# include <netlink/netlink.h>
 #else
 #  undef AF_NETLINK
 #endif
