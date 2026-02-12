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

void DisplayMenu(){
	printf(
		"\n0 - Exit"
		"\n1 - Sum"
		"\n2 - Minus\n"
	);
	printf("Choose a option:\n");
}

int GetOption(void){
	int option;

	DisplayMenu();
	scanf("%d", &option);
	
	return option;
}

int ReadInt(const char *message){
	int value;
	int result;

	while(1){
		printf("%s", message);
    result = scanf("%d", &value);

    if (result == 1) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        return value;
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    printf("Invalid input. Try again.\n");
	}
}