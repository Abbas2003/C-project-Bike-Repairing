#include<stdio.h>
#include<conio.h>

int labor(int lab_hours, int lab_pay)
{
int  labor = lab_hours * lab_pay;
printf("\n\t\t\tTotal paymnet will be %d",labor);
printf("\n\n\t\tTHANK YOU FOR CHOOSING US FOR YOUR SERVICE");
return 0;
}
int add_customer()
{
char name[20];
int bike_number;
unsigned long long int phone;
FILE *fp;
fp = fopen("customer_records.txt","a+");
clrscr();
printf("\n\n\t\t\tEnter your name: ");
scanf("%s",&name);

printf("\t\t\tEnter bike number : ");
scanf("%d", &bike_number);

printf("\t\t\tEnter Phone number: ");
scanf("%llu", &phone);

fprintf(fp,"\n\nName = %s", name);
fprintf(fp, "\nBike Number = %d", bike_number);
fprintf(fp, "\nContact =  %llu", phone);

fclose(fp);
printf("\t\t\tRECORD SAVED SUCCESSFULLY");
return 0;
}


void main()
{
int issue, customer;
int i;
clrscr();
for(i=0;i<=100;i++)
{
window(35,12,80,12);
textcolor(WHITE);
delay(50);
printf("LOADING : %d %",i);
}
clrscr();
condition:
window(5,1,80,25);
printf("\t\t\tWELCOME TO OUR WORKSHOP\n");
printf("\n\t\tPress 1 for New customer and 2 for Old: ");
scanf("%d",&customer);
if(customer == 1)
{
add_customer();
}
else if (customer == 2)
{
printf("\n\t\t\tWELCOME AGAIN\n");
}
else
{
printf("\n\t\t\tSorry Wrong Input:");
getch();
clrscr();
goto condition;
}
services:
printf("\n\n\t\tServices available are: \n\n 1.Tunning\t 2.Wiring\t 3.Oil Change\t 4.Repairing\n\n 5.Puncture\t 6.Filter Change\t 7.Wheel Change\t 8.Head Light\n\n 9.Molds\t 10.Spark plug\t  11.Kick Change\t  12.Service ");

printf("\n\n\tEnter your bike issue number: ");
scanf("%d",&issue);
if(issue == 1)
{

printf("Labor pay is 300 Rupees per Hour\n");
printf("Will take 3 hours");
labor(3,300);
}
else if(issue == 2)
{
printf("\t\t\tLabor pay is 200 Rupees per Hour\n");
printf("\t\t\tWill take 1 hour");
labor(1,200);
}

else if(issue == 3)
{
printf("\t\t\tLabor pay is 500 Rupees per Hour\n");
printf("\t\t\tWill take 3 hours");
labor(3,500);
}
else if(issue == 4)
{
printf("\t\t\tLabor pay is 250 Rupees per Hour\n");
printf("\t\t\tWill take 2 hours");
labor(2,250);
}
else if(issue == 5)
{
printf("\t\t\tlabor pay is 50 Rupees per Hour\n");
printf("\t\t\tWill take 1 hours");
labor(1,50);
}
else if(issue == 6)
{
 printf("\t\t\tLabor pay is 230 Rupees per Hour\n");
printf("\t\t\tWill take 2 hours");
 labor(2,230);
 }
 else if(issue == 7)
 {
 printf("\t\t\tLabor pay is 50 Rupees per Hour\n");
printf("\t\t\tWill take 1 hours");
 labor(1,50);
 }
else if(issue==8)
{
printf("\t\t\tlabor pay is 70 Rupees per Hour\n");
printf("\t\t\tWill take 2 hours");
labor(2,70);
}
else if(issue==9)
{
printf("\t\t\tLabor pay is 100 Rupees per Hour\n");
printf("\t\t\tWill take 1 hours");
labor(1,100);
}
else if (issue==10)
{
printf("\t\t\tLabor pay is 200 Rupees per Hour\n");
printf("\t\t\tWill take 3 hours");
labor(3,200);
}
else if(issue==11)
{
printf("\t\t\tLabor pay is 500 Rupees per Hour\n");
printf("\t\t\tWill take 2 hours");
labor(2,500);
}
else if(issue==12)
{
printf("\t\t\tLabor pay is 400 Rupees per Hour\n");
printf("\t\t\tWill take 2 hours");
labor(2,400);
}
else

{
printf("\n\t\tInput Error");
getch();
clrscr();
goto services;
}

getch();
}
