#include <stdio.h>

int main(void){

	char opt;
	float num1,num2;
	char oper;
	int sum;
	int diff;
	int prod;
	int dv;

	sum = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	dv = num1 / num2; 

	
	
	printf("Welcome to my Command-Line Calculator (CLC)\n");
	printf("Developer: Mohammad Imaad\n");
	printf("Version: Assignment1\n");
	printf("Date: 24-10-2023\n");

	printf("\nSelect one of the following items:\n");
	printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
	printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
	printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
	printf("V) - Define variables and assign them values.\n");
	printf("E) - Exit\n");
	
	scanf(" %c",&opt);
	
	while (opt != 'E'){

		if (opt == 'B'){
			printf("Enter the first number:\n");
			scanf("%f",&num1);
			printf("PLease enter your desired mode of operation(+ ,- ,* ,/ ):\n");
			scanf(" %c",&oper);
			printf("Enter the second number:\n");
			scanf("%f", &num2);
			
			
			switch (oper){
				case '+':
					printf("the result is %.2f\n",(num1 + num2));
					break;
				case '-':
					printf("the result is %.2f\n",(num1 - num2));
					break;
				case '*':
					printf("the result is %.2f\n",(num1 * num2));
					break;
				case '/':
					printf("the result is %.2f\n",(num1 / num2));
					break;
			};
			printf("Please select your option ( B , U , A , V , E )     \n");
			scanf(" %c",&opt);
		} else if (opt == 'U' || opt == 'A' || opt == 'V'){
			printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n");
			printf("Please select your option ( B , U , A , V , E )\n");
			scanf(" %c",&opt);
			
		} else if (opt == 'E'){
			break;
		} else{
			printf("error\n");
			printf("Please select your option ( B , U , A , V , E )\n");
			scanf(" %c",&opt);
		};
	
	};
	printf("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!B");
}