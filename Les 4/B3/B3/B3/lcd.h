/*
 * lcd.h
 *
 * Created: 29-3-2018 11:43:19
 *  Author: larsv
 */ 



void init(void);
void display_text(char *str);
void set_cursor(int position);
void shift_text(int position);
void clear_LCD(void);