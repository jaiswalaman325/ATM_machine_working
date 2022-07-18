#include<stdio.h>
#include<conio.h>
void main()
{
	int account_type, choice, balance;
	int pin, rb;
	int more_transaction;
	float amount=50000.0000, deposit, withdraw;
	printf("________________________\n");
	printf("                             WELCOME TO ATM\n");
	printf("________________________\n\n");

	//Account_type
	printf("1. Saving Account\n");
	printf("2. current Account\n");

	//choose which type your account
	scanf("%d",&account_type);
	if(account_type==1 || account_type==2)
	{
		printf("         ENTER YOUR PIN\n");
		scanf("              %d",&pin);
		if(pin==1520)
		{
			start:
		     printf("________MENU_________\n");
		     printf("1. Check Balance             2. Withdraw\n");
		     printf("3. Deposit                   4. Exit\n");
		     printf("_________________\n");
		
               //Enter choice
               scanf("%d",&choice);
               
               //Now using switch statement
               switch(choice)
               {
                    case 1:
                    printf("\nYOUR ACCOUNT BALANCE: %f",amount);
                    
                    printf("\n\n\nDO YOU WISH TO HAVE ANOTHER TRANSACTION?(1=yes/2=no)\n");
                    scanf("%d",&more_transaction);
                    if(more_transaction==1)
                    {
                         goto start;
                    }
                    else
                    {
                         printf("\nTHANKS FOR USING ATM");
                    }
                    break;
                    
                    case 2:
                    printf("\n    ENTER THE WITHDRAWAL AMOUNT :");
                    scanf("%f",&withdraw);
                    if(withdraw>amount)
                    {
                         printf("INSUFFICIEANT BALANCE..!");
                    }
                    else
                    {
                         amount=amount-withdraw;
                         printf("COLLECT CASTH..");
                         printf("\nYou Want to see your balance\n");
                         printf("1.YES                2.NO\n");
                         //Enter choice
                         scanf("%d",&rb);
                    if(rb==1)
                    {
                         printf("Your Account Balance is : %f",amount);
                    }
                    printf("\n\n\nDO YOU WISH TO HAVE ANOTHER TRANSACTION?(1=yes/2=no)\n");
                    scanf("%d",&more_transaction);
                    if(more_transaction==1)
                    {
                         goto start;
                    }
                    else
                    {
                         printf("\nTHANKS FOR USING ATM");
                    }
                    break;
                    
                    case 3:
                    printf("\nPlease make sure amount will be in multiple of 100\n");
                    printf("\nEnter the deposit amount\n");
                    scanf("%f",&deposit);
                    amount=amount+deposit;
                    printf("\nYour Total Account Balance : %f",amount);
                    
                    printf("\n\n\nDO YOU WISH TO HAVE ANOTHER TRANSACTION?(1=yes/2=no)\n");
                    scanf("%d",&more_transaction);
                    if(more_transaction==1)
                    {
                         goto start;
                    }
                    else
                    {
                         printf("\nTHANKS FOR USING ATM");
                    }
                    break;
                         
                    case 4:
                    printf("\nTHANKS FOR USING ATM");
                    break;
                         
                    default:
                    printf("\nOPPS! INVALID ENTERY");
                    break;
                    }
               }		
          }
          else
          {
               printf("\n          ENTER CORRECT PIN");
               printf("\n          THANKU ");
          }
     }
}