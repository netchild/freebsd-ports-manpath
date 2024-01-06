--- src/os-freebsd.c.orig	2023-09-29 01:15:47 UTC
+++ src/os-freebsd.c
@@ -141,7 +141,7 @@ tdep_get_elf_image (struct elf_image *ei, pid_t pid, u
      if (ei)
        ret = elf_map_image (ei, kv->kve_path);
      else
-       ret = strlen (kv->kve_path) >= pathlen ? -UNW_ENOMEM : UNW_ESUCCESS:;
+       ret = strlen (kv->kve_path) >= pathlen ? -UNW_ENOMEM : UNW_ESUCCESS;
      break;
   }
   free_mem(buf, len1);
