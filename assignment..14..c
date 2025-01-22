// to perform all the arithmetic operation.Program should take required entity and let user choose desired operation(calculator)
#include<stdio.h>
int main()
{
	float num1, num2, result;
	char operation;
	printf("Enter the first number:");
	scanf("%f", &num1);
	printf("Enter the second number:");
	scanf("%f", &num2);
	printf("Choose operation +,-,*,/");
	scanf("%c",&operation);
	
	switch (operation) 

	{
		case '+':
			result=num1 + num2;
			printf("%f+%f=%f\n",num1, num2, result);
			break;
			
			case'-':
				result=num1 - num2;
				printf("%f-%f=%f\n",num1, num2, result);
				break;
				
				case'*':
					result=num1*num2;
					printf("%f*%f=%f\n",num1, num2, result);
					break;
					
					case'/':
						result=num1/num2;
						printf("%f/%f=%f\n",num1, num2, result);
						break;
						default:
						printf("invalid operation!");
						break;
					}
					return 0;
			
	}
	

