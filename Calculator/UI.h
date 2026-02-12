#ifndef UI_H
#define UI_H

//enum
typedef enum {
  MENU_EXIT = 0,
  MENU_SUM = 1,
  MENU_MINUS = 2
} MenuOption;

void CleanScreen(void);
void DisplayMenu(void);
int ReadInt(const char *message);
int GetOption(void);

#endif
