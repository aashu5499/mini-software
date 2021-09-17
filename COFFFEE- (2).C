
//program for coffeshop//
#include<conio.h>
#include<stdio.h>
void main()
{
int i,ch,ch1,ch2,ch3,ch4;
int n,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;
float bill,bill1,bill2,bill3,bill4,bill5,bill6,bill7,bill8,bill9,bill10,bill11,bill12;
float total;
clrscr();
printf(" !!WELCOME TO BROS COFEESHOP!!\n_________________________________\n");
for(i=1;i<3;i++)
{
printf(" **WHAT do you want to PURCHASE**\n  \n1.COFFEE  \n2.PIZZA \n3.SANDWICH \n4.BURGER ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\twhich coffee? \t \n1.HOT COFFEE \n2.COLD COFEE \n3.CAPICHINO");
scanf("%d",&ch1);
if(ch1==1)
{
printf("\t>>Quantity? ");
scanf("%d",&n);
bill=n*10;
}
if(ch1==2)
{
printf("\t>>Quantity? ");
scanf("%d",&n1);
bill1=20*n1;
}
if(ch1==3)
{
printf("\t>>Quantity? ");
scanf("%d",&n2);
bill2=30*n2;
}
break;
case 2:
printf("\twhich pizza? \t \n1.CHIKEN PIZZA \n2.VEG PIZZA \n3.PANRRE PIZZA ");
scanf("%d",&ch2);
if(ch2==1)
{
printf("\t>>Quantity? ");
scanf("%d",&n3);
bill3=50*n3;
}
if(ch2==2)
{
printf("\t>>Quantity? ");
scanf("%d",&n4);
bill4=55*n4;
}
if (ch2==3)
{
printf("\t>>Quantity? ");
scanf("%d",&n6);
bill6=60*n6;
}
break;
case 3:
printf("\twhich sandwich? \t \n1.CHEESE SANDWICH \n2.BUTTER SANDWICH \n2.EGG SANDWICH");
scanf("%d",&ch3);
if(ch3==1)
{
printf("\t>>Quantity? ");
scanf("%d",&n7);
bill7=100*n7;
}
if(ch3==2)
{
printf("\t>>Quantity? ");
scanf("%d",&n8);
bill8=120*n8;
}
if(ch3==3)
{
printf("\t>>Quantity? ");
scanf("%d",&n9);
bill9=130*n9;
}
break;
case 4:
printf("\tWhich Burger? \t \n1.VEG BURGER \n2.CHEESE BURGER \n3.SPECIAL BURGER");
scanf("%d",&ch4);
if(ch4==1)
{
printf("\t>>Quantity? ");
scanf("%d",&n10);
bill10=200*n10;
}
if(ch4==2)
{
printf("\t>>Quantity? ");
scanf("%d",&n11);
bill11=220*n11;
}
if (ch4==3)
{
printf("\t>>Quantity? ");
scanf("%d",&n12);
bill12=230*n12;
}
break;
}
printf("\n<<MAIN MENU>> \n1.YES \n2.NO");
scanf("%d",&i);
}
total=bill+bill1+bill2+bill3+bill4+bill5+bill6+bill7+bill8+bill9+bill10+bill11+bill12;
printf("\n\t YOUR TOTAL BILL IS %f",total);
printf("\n\t\t\tThank you, visit again ");
getch();
}



