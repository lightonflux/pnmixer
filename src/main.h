#ifndef MAIN_H_
#define MAIN_H_

GtkWidget* create_window1 (void);
GtkWidget* create_menu (void);
GtkWidget* create_about (void);
GtkWidget* do_prefs (void);

int setvol(int vol);
void setmute();
int getvol();
void get_current_levels();
int get_mute_state();
void hide_me();
void load_status_icons();
void update_vol_text();

#endif // MAIN_H