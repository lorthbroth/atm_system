/********************************************************        
* A simple ATM system.			               *   
*                                                      *   
* Author:  Dominic, Kgoete                             *   
*                                                      *   
* Date:    May, 2019				       *   
********************************************************/  

#include <stdio.h>

unsigned long amount = 5000, deposit, withdraw;
int choice, pin, k;
char transaction = 'y';

void main()
{
	while(pin != 8421)
	{
		printf("Welcome please enter your PIN number: ");
		scanf("%d", &pin);
		if (pin != 8421)
		printf("PLEASE ENTER THE CORRECT PIN\n");
	}
	
	do
	{
		printf("\n\n**********Welcome to the new age ATM service**************\n");
		printf("1. Balance Enquiry\n");
		printf("2. Withdraw cash\n");
		printf("3. Deposit Cash\n");
		printf("4. quit\n");
		printf("*********************************************************\n\n");
		printf("ENTER YOUR CHOICE:	");
		scanf("%d", &choice);

		switch(choice)
		{
		case 1:
			printf("\nYOUR BALANCE IS: R%lu", amount);
			break;
		case 2:
			printf("\nENTER THE AMOUNT TO BE WITHDRAWN");
		}
	}while(!k);
	printf("\n\nTHANK YOU");
} 
