#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<process.h>
#include"lib.h"
void place(int loc){
if(loc==1)
printf("You choosed Istanbul\n");
else if(loc==2)
printf("You choosed Bodrum\n");
else if(loc==3)
printf("You choosed Marmaris\n");
else if(loc==4)
printf("You choosed Kemer\n");
else if(loc==5)
printf("You choosed Alanya\n");
}
void calender(int r[]){
int yy, mm, dd;
int hop,deem,blank,i=1;
long int lb;
do{
	printf("\nEnter the year: ");
	scanf("%d",&yy);
}
while(yy<1);
do{
	printf("\nEnter the month: ");
	scanf("%d",&mm);
}
while(mm<1||mm>12);
if(mm==4||mm==6||mm==9||mm==11){
	dd=30;
}
else if(yy%4==0&&yy%100!=0||yy%400==0){
	if(mm==2){
	dd=29;
	}
}
else{
	if(mm==2){
	dd=28;
	}
}
if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
dd=31;
hop=(yy-1)/4-(yy-1)/100+(yy-1)/400;
lb=(yy-1)*365l+hop;
switch(mm){
	case 12:lb+=30;
	case 11:lb+=31;
	case 10:lb+=30;
	case 9:lb+=31;
	case 8:lb+=31;
	case 7:lb+=30;
	case 6:lb+=31;
	case 5:lb+=30;
	case 4:lb+=31;
	case 3:lb+=28;
	case 2:lb+=31;
	case 1:lb+=1;
}
printf("\nmon tue wed thu fri sat sun");
switch(lb%7)
{
case 1: deem=0;
break;
case 2: deem=4;
break;
case 3: deem=8;
break;
case 4: deem=12;
break;
case 5: deem=16;
break;
case 6: deem=20;
break;
default : deem=24; 
}
printf("\n");
blank=deem;
while(blank>0)
{
printf(" ");
--blank;
}
while(dd>=i)
{
if(deem%28==0)
printf("\n");
printf("%3d ",i);
i++;
deem+=4;
}

do{
printf("\nEnter a day ");
scanf("%d",&dd);

if((mm==4||mm==6||mm==9||mm==11) && dd>30){
	dd=0;
	continue;
}
int counter;
if(yy%4==0 && yy%100!=0 || yy%400==0){
		if(mm==2){
			do{
				if(dd>29){
					printf("\nEnter a day ");
					scanf("%d",&dd);
				}
				else{
					counter=1;
				}
		  break;
			}
			while(counter=1);
			dd=dd;
			continue;
		}
		
		else if(mm==2){
		dd=28;
		continue;
	}
}


if((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)&& dd > 31){
	dd = 0;
	continue;
}
hop=(yy-1)/4-(yy-1)/100+(yy-1)/400;
lb=(yy-1)*365l+hop;
}while(dd < 1);
r[0] = yy;
r[1] = mm;
r[2] = dd;
}

void picture(void){
   printf("\n                       슬슬슬슬슬슬슬슬슬슬슬슬슬슬슬슬슬슬�");
   printf("\n                       ||                                 ||");
   printf("\n                       ||     =======================     ||");
   printf("\n                       ||     [                     ]     ||");
   printf("\n                       ||     [      WELCOME TO     ]     ||");
   printf("\n                       ||     [                     ]     ||");
   printf("\n                       ||     [      F&T  HOTEL     ]     ||");
   printf("\n                       ||     [                     ]     ||");
   printf("\n                       ||     =======================     ||");
   printf("\n                       ||                                 ||");
   printf("\n                       슬슬슬슬슬슬슬슬슬슬슬슬슬슬슬슬슬슬�\n\n");
}
