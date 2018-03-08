/*
 * lcd.h
 *
 * Created: 8-3-2018 09:34:48
 *  Author: larsv
 */ 


void init(void);
void display_text(char *str);
void set_cursor(int position);
void shift_text(int position);
void clear_LCD(void);