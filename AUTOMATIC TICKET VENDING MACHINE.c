#include <stdio.h>
tkt=5;
void main()
{
	int coin,tic,bal,cal;
	printf("AUTOMATIC TICKET VENDING MACHINE\n");
	printf("******************************\n");
	printf("Enter the number of coin:");
	scanf("%d",&coin);
	printf("Enter the ticket:");
	scanf("%d",&tic);
	if(coin%5==0)
{
	  printf("the number of tickets:%d",cal);
}
	else
{
	  printf("insufficient balance\n"); 
	bal=cal-coin;
	printf("the balance amount%d",bal);	
}
}
