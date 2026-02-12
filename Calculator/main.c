#include <stdio.h>
#include "arithmetics.h"
#include "UI.h"

int main(){
	printf("Hello World!\n");

	int choose;
	
	while(1){
		DisplayMenu();
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				CleanScreen();
				printf("First number: \n");
				int num1;
				scanf("%d", &num1);

				printf("Secound number: \n");
				int num2;
				scanf("%d", &num2);
				
				CleanScreen();
				printf("Result: %d \n", sum(num1, num2));
				break;
			case 0:
				CleanScreen();
				printf("Exit!\n");
				return 0;
			default:
				CleanScreen();
				printf("Value incorrect!");
		}

	}

	return 0;
}
