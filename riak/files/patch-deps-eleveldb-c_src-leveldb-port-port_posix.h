--- deps/eleveldb/c_src/leveldb/port/port_posix.h.orig	2011-10-29 09:12:35.000000000 -0400
+++ deps/eleveldb/c_src/leveldb/port/port_posix.h	2011-10-29 09:12:08.000000000 -0400
@@ -16,6 +16,8 @@
   #else
     #define BIG_ENDIAN
   #endif
+#elif defined(OS_FREEBSD)
+  #include <sys/endian.h>
 #else
   #include <endian.h>
 #endif
