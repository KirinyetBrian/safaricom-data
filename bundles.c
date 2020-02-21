// a program for safaricom bundles purchase
#include <stdio.h>
#include <conio.h>

int main ()
{
int choice;
int choice1;
int choice2;
int choice3;
float amount;
int phone;
int USSD;
int okoa;
int normal_data;
float balance;
int topup()
{

 printf("enter amount you want to top up\n");
    scanf("%f",&amount);
    if(amount> 0 )
	 {
		balance = amount  + balance;
		printf("\nyou have topped up %.2f",amount);
		system("cls");
		printf("\nyour new acount balance is %.2f\n",balance);

	 }
	 else
	 {

		 printf("\nerror:you can not deposit less than 0" );
		  printf("\nkindly top up once again." );
		  topup ();

	 }
	 }
	 topup();
printf("enter ussd code\n");
scanf("%d",&USSD);
system("cls");

printf("*******SAFARICOM DATA BUNDLES*********\n");
printf("1.Data without expiry\n");
printf("2.calls and SMS\n");
printf("3.normal data bundles\n");
printf("4.check balance\n");


scanf("%d",&choice);
system("cls");
switch (choice)
{
 case 1:

    printf("get data no expiry date\n");
    printf("1. Buy for my no.\n");
    printf("2. Buy for other no.\n");
    printf("3. okoa data.\n");
    printf("4. Data balance\n");
    printf("5. Stop auto renew\n");
    printf("0. BACK 00:HOME\n");
    printf("enter a choice\n");

    scanf("%d",&choice);
    system("cls");

switch (choice)
{
    case 1:
        printf("enter amount you wish to spend\n");
        scanf("%d",&amount);
        system("cls");
        printf("you have successfully purchased your bundle.\n");
        system("cls");
        getch();
        break;

    case 2:
        printf("please enter the other number\n");
        scanf("%d",&phone);
         system("cls");
        printf("enter amount you wish to spend\n");
        scanf("%d",&amount);

        printf("you have successfully purchased your bundle for:");
        printf("%d",phone);
        getch();

        break;

    case 3:
        printf("select bundles\n");
        printf("1. Okoa 450MB for sh99\n");
        printf("2. Okoa 120MB for sh50\n");
        printf("3. Okoa 45MB for sh20\n");
        printf("4. Okoa 10MB for sh10\n");
        printf("5. Okoa 5MB for sh5\n");
        scanf("%d",&okoa);
        system ("cls");
        switch (okoa)
        {
        case 1:
            printf("you have successfully received 450mb for sh 99.\n");
            getch();
        break;
        case 2:
            printf("you have successfully received 120mb for sh 50.\n");
        break;
        case 3:
            printf("you have successfully received 45mb for sh 20.\n");
        break;
        case 4:
            printf("you have successfully received 10mb for sh 10.\n");
        break;
        case 5:
            printf("you have successfully received 5mb for sh 5.\n");
        break;
        default:
            printf("invalid choice");
            break;
        }
        break;

    default:
        printf("invalid choice");
        break;

        break;

}
 case 2:
    printf("For calls and SMS,Get '50%' EXTRA Airtime\n (NO EXPIRY DATA)\n");

    printf("1. Buy for my no.\n");
    printf("2. Buy for other no.\n");
    printf("3. Balance\n");
    printf("4. Stop auto renew\n");
    printf("0. BACK 00:HOME\n");
    system("cls");
    break;
case 3:
    printf("1. All in one bundle.\n");
    printf("2. Daily bundle.\n");
    printf("3. 7Day Bundle.\n");
    printf("4. 30 day bundle\n");
    printf("5. Giga Bundle\n");
    printf("6. Platinum\n");
    printf("7. MORE\n");
    printf("0. BACK 00:HOME\n");


    printf("enter your choice\n");
    scanf("%d",&normal_data);
    system("cls");
    switch (normal_data)

    {
    case 1:
    printf("how much do you wish to spend?\n");
    printf("1.Ksh 1000\n");
    printf("2.Ksh 2000\n");
    printf("3.Ksh 3000\n");
    printf("4.Ksh 5000\n");
    printf("5.Ksh 10000\n");
    printf("6.Ksh 500\n");

    break;
    case 2:
    printf("1.Ksh 10:25mb+25sms\n");
    printf("2.Ksh 20:70 mb+70sms + whatsapp\n");
    printf("3.Ksh 50:200mb+200sms + whatsapp\n");
    printf("4.Ksh 100:1GB +200sms +whatsapp\n");
    printf("5.power hour 250mv@sh 19\n");
    printf("1.Ksh 5:7mb+7sms\n");

    scanf("%d",&choice);
    switch(choice)

    {
    case 1:
    if (amount<10)
    {
     printf("kindly recharge your account and try again\n");

     topup();
    }
    printf("you have successfuly subscribed to 25mb+25sms at ksh 10\n ");


    break;
    case 2:
     if (amount<20)
    {
     printf("kindly recharge your account and try again\n");

     topup();
    }
    printf("you have successfuly subscribed to 70mb+70sms at ksh 20\n ");

    break;
    case 3:
      if (amount<50)
    {
     printf("kindly recharge your account and try again\n");

     topup();
    }
    printf("you have successfuly subscribed to 200mb+200sms at ksh 50\n ");

    default:
        printf("invalid choice\n");
     break;
    }
}
    break;

default:
    printf("invalid choice");
    break;

}
}
