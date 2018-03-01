/*
 * lcd.h
 *
 * Created: 1-3-2018 09:40:47
 *  Author: larsv
 */ 

void init(void);
void display_text(char *str);
void set_cursor(int position);
void shift_text(int position);
void clear_LCD(void);