#include "v4l.h"

int add_rgb_text (guchar *, int, int, char *, char *, gboolean, gboolean);
void remote_save (cam_t *);
void save_thread (cam_t *);
int local_save (cam_t *);
gchar *volume_uri(gchar *host, gchar *proto, gchar *rdir);
void umount_volume(cam_t *);
void mount_volume (cam_t *);
