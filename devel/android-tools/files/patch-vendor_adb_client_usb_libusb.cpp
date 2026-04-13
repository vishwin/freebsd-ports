--- vendor/adb/client/usb_libusb.cpp	2024-08-29 19:46:57.000000000 +0200
+++ vendor/adb/client/usb_libusb.cpp	2026-03-21 14:00:02.239458000 +0100
@@ -38,6 +38,8 @@
 
 #ifdef ANDROID_TOOLS_USE_BUNDLED_LIBUSB
 #include <libusb/libusb.h>
+#elif defined(__FreeBSD__)
+#include <libusb.h>
 #else
 #include <libusb-1.0/libusb.h>
 #endif
@@ -507,8 +509,10 @@
                 return 5000;
             case LIBUSB_SPEED_SUPER_PLUS:
                 return 10000;
+#ifdef LIBUSB_SPEED_SUPER_PLUS_X2
             case LIBUSB_SPEED_SUPER_PLUS_X2:
                 return 20000;
+#endif
             case LIBUSB_SPEED_UNKNOWN:
             default:
                 return 0;
@@ -540,6 +544,7 @@
         }
     }
 
+#ifdef LIBUSB_BT_SUPERSPEED_PLUS_CAPABILITY
     static uint64_t ExtractMaxSuperSpeedPlus(libusb_ssplus_usb_device_capability_descriptor* cap) {
         // The exponents is one of {bytes, kB, MB, or GB}. We express speed in MB so we use a 0
         // multiplier for value which would result in 0MB anyway.
@@ -552,6 +557,7 @@
         }
         return max_speed;
     }
+#endif
 
     void RetrieveSpeeds() {
         negotiated_speed_ = ToConnectionSpeed(libusb_get_device_speed(device_.get()));
@@ -574,6 +580,7 @@
                         libusb_free_ss_usb_device_capability_descriptor(cap);
                     }
                 } break;
+#ifdef LIBUSB_BT_SUPERSPEED_PLUS_CAPABILITY
                 case LIBUSB_BT_SUPERSPEED_PLUS_CAPABILITY: {
                     libusb_ssplus_usb_device_capability_descriptor* cap = nullptr;
                     if (!libusb_get_ssplus_usb_device_capability_descriptor(
@@ -582,6 +589,7 @@
                         libusb_free_ssplus_usb_device_capability_descriptor(cap);
                     }
                 } break;
+#endif
                 default:
                     break;
             }
