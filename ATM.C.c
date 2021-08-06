#include<stdio.h>
main()
{
	float x,y;
	char ch;
	printf("Enter initial amount");
	scanf("%f",&x);
	printf("Enter\nc for credit\nd for debit\nb for balance\n");
	scanf("\n%c",&ch);
	switch(ch)
	{
		case 'c':
	    printf("Enter credit amount\n");
	   	scanf("%f",&y);
		x=x+y;
		printf("New amount=%f",x);
		break;
		case'd':
			printf("Enter debit amount\n");
			scanf("%f",&y);
			if(x>=y)
			{
				x=x-y;
				printf("New amount=%f",x);
			}
			else
			{
				printf("Insufficient amount in your account");
			}
			break;
			case 'b':
				printf("Amount in your account=%f",x);
				break;
				default:
					printf("choose correct option for operation");
				}
			
			
	}
