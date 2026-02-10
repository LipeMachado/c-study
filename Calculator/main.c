#include <stdio.h>
#include <stdlib.h>
#include "arithmetics.h"

void cleanScreen(){
	#ifdef _WIN32
        	system("cls"); // Windows
	#else
		system("clear"); // Linux/Unix
	#endif
}

int main(){
	printf("Hello World!\n");

	int choose;
	int num1;
	int num2;
	
	while(1){
		printf("\n1 - Sum \n2 - Minus \n0 - Exit\n");
		printf("Choose a option:\n");
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				printf("First number: \n");
				scanf("%d", &num1);
				printf("Secound number: \n");
				scanf("%d", &num2);
				cleanScreen();
				printf("Result: %d \n", sum(num1, num2));
				break;
			case 0:
				cleanScreen();
				printf("Saída do programa!\n");
				return 0;
			default:
				cleanScreen();
				printf("Valor incorreto!");
		}
	}

	return 0;
}
