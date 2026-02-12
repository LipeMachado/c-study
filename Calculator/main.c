#include <stdio.h>
#include "arithmetics.h"
#include "UI.h"

int ExecuteOperation(MenuOption option){
	switch(option){
			case MENU_SUM: {
				CleanScreen();

				int num1 = ReadInt("First number:\n");
				int num2 = ReadInt("Secound number:\n");
				
				CleanScreen();
				printf("Result: %d \n", sum(num1, num2));
				
				return 1;
			}
			case MENU_MINUS: {
				CleanScreen();

				int num1 = ReadInt("First number:\n");
				int num2 = ReadInt("Secound number:\n");

				CleanScreen();
				printf("Result: %d \n", minus(num1, num2));
				
				return 1;
			}
			case MENU_EXIT:
				CleanScreen();
				printf("Exit!\n");
				
				return 0;
			default:
				printf("Invalid value!\n");
				return 1;
		}
}

int main(){
	printf("Hello World!\n");

	int running = 1;

	while(running){
		int rawOption = GetOption();
		MenuOption option = (MenuOption)rawOption;

		running = ExecuteOperation(option);
	}

	return 0;
}
