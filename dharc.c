#include<stdio.h>
#include<stdlib.h>
unsigned long amt=10000, deposit, withdraw;
int option, pinnumber=0, c=0;
char trans='y';
int main()
{
    while(pinnumber!=7321)
    {
    printf("enter your secret pin number");
    scanf("%d",&pinnumber); 
    if(pinnumber!=7231)
    {
        printf("enter valid pin number\n");
    }
    }
	    printf("welcome");
        printf("1.check balance \n2.withdraw\n3.deposit\n4.quit");
        printf("\n enter your option\n");
        scanf("%d",&option);
		if(option==2)
		{
			printf("enter the amount to withdraw\n");
            scanf("%lu",&withdraw); 
        }
	while(c!=1)
    { 
		switch(option) 
        {
            case 1:
                printf("\n YOUR BALANCE IS Rs. %lu\n",amt); 
                break; 
            case 2:
                if(withdraw%100!=0)
                {
                    printf("enter in multiples of hundred\n");
                }
                else
				{
					if(withdraw>(amt-500))
					{
                    printf("INSUFFICIENT BALANCE\n");
					}
					else
					{
                    amt=amt-withdraw; 
                    printf("COLLECT CASH\n");
                    printf("YOUR CURRENT BALANCE IS %lu\n", amt); 
					}
				}
                break; 
            case 3:
                printf("ENTER DEPOSIT AMOUNT\n");
                scanf("%lu",&deposit);
                amt=amt+deposit; 
                printf("YOUR BALANCE IS %lu\n",amt); 
                break; 
            case 4:
                printf("THANK YOU FOR USING OUR ATM SERVICE\n");
                break; 
            default:
                printf("INVALID OPTION\n");
                break; 
        }
		printf("Do you need another transaction?\n y/n \n");
		scanf("%c",&trans); 
		if(trans=='n') 
		{
			c=1;
		}
	} 
printf("THANKS FOR USING OUR SERVICE");
return 0;
}

