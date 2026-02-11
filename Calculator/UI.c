#include <stdio.h>
#include <stdlib.h>
#include "UI.h"

void CleanScreen(void){
	#ifdef _WIN32
    		system("cls");
	#else
    		system("clear");
	#endif
}

void Menu(){
	printf(
		"\n0 - Exit"
		"\n1 - Sum"
		"\n2 - Minus\n"
	);
	printf("Choose a option:\n");
}
