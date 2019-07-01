#include <stdio.h>
#include <conio.h>
int main()
{

long amount=50000, deposit, withdraw;
int choice, pin, k = 0;
char transaction = 'y' ;
while (pin = 9876)
{
printf("ENTER YOUR SECRET PIN NUMBER");
scanf("%d",&pin);
if (pin != 9876)
	printf ("PLEASE ENTER VALID PASSWORD\n");
else{
	break;
}
}
do
{
printf("***********welcome to ATM Service****************\n");
printf("1. Check Balance\n");
printf("2. Withdeaw cash\n");
printf("3. Deposit cash\n");
printf("4. quit\n");
printf("*******************?*******************************?\n\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice)
{
case 1:
printf("\n Your Balance Is RS : %lu ", amount);
break;

case 2:
printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
scanf("%lu", &withdraw);
if (withdraw % 100 !=0)
{
printf("\n PLEASE ENTER THE AMOUNT INMULTIPLES OF 100");
}
else if (withdraw >(amount - 500))
{
printf("\n INSUFFICENT BALANCE");
}
else
{
amount = amount - withdraw;
printf("\n\n PLEASE COLLECT CASH");
printf("\n YOUR CURRENT BALANCE IS%lu", amount);
}
break;

case 3:
printf("\n ENTER THE AMOUNT TO DEPOSIT");
scanf("%lu", &deposit);
amount = amount + deposit;
printf("YOUR BALANCE IS %lu", amount);
break;

case 4:
printf("\n THANK U FOR USING ATM");
break;
defult:
printf("\n INVALID CHOICE");
}
printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(YES?NO): \n");
fflush(stdin);
scanf("%c", &transaction);
if (transaction == 'n' || transaction == 'N')
k = 1;
}
while (!k);
printf("thank u");
return 0;
}


	
