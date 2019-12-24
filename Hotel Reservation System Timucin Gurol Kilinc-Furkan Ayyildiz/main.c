#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"lib.h"
struct oda{
	char minibar;
	char tv;
	char jakuzi;
	char servis;                                  //star part
	int  price;
};
struct rate{
	char minibar[150];
	char jakuzi[150];
	char servis[150];
	char tv[150];                                 //file part
	char price[150];
};
struct guest{
	char name[10];
	char surname[10];                              //invoice part
	char TC[11];
	char passport[10];
	char phone[11];
};

struct invoice{
	struct guest *g;
	int cIn[3];
	int cOut[3];
};

void main() {
int x;
system("COLOR 3");
 picture();
	do{
printf("1)Istanbul\n2)Bodrum\n3)Marmaris\n4)Kemer\n5)Alanya\n");
printf("Please select your hotel location: ");
scanf("%d",&x);

place(x);
}
while (x<=0 || x>=6);
system("pause");
system("cls");
picture();
int check_in[3];
int check_out[3];
system("COLOR 2");
calender(check_in);
printf("Check-in date:%d/%d/%d",check_in[0],check_in[1],check_in[2]); 
calender(check_out);
printf("Check-out date:%d/%d/%d\n",check_out[0],check_out[1],check_out[2]); 
system("pause");
system("cls");
system("COLOR 6");
picture();
struct oda hotel[3];
	struct oda money[9];
	struct rate derece,derece2,derece3;
	int oda_sec,single,dooble,family;
	char smb[150];
	do{
	printf("1)Single Room\n2)Double Room\n3)Family Room\n");
	printf("Please select room type: ");
	scanf("%d",&oda_sec);
    }
	while(oda_sec<1 || oda_sec>3);
	
if(oda_sec==1){
    FILE *tek;
   	tek=fopen("tek.txt","r");
	  fgets (smb,150,tek)!=NULL; 
     	puts(smb);
      fgets (derece.minibar,150,tek)!=NULL; 
        puts(derece.minibar);
      fgets(derece.tv,150,tek)!=NULL;
        puts(derece.tv);
      fgets (derece.servis,150,tek)!=NULL; 
        puts(derece.servis);
      fgets (derece.jakuzi,150,tek)!=NULL; 
        puts(derece.jakuzi);
       fgets(derece.price,150,tek)!=NULL;
	    puts(derece.price);	 
 fclose(tek);
printf("Please select your room rating:");
scanf("%d",&single);
printf("Your room:\nHas=+\nHas not=-\n");
			if(single==1){
                hotel[0].minibar='+';
                hotel[0].tv='-';
				hotel[0].servis='-';
				hotel[0].jakuzi='-';
				money[0].price=100;
				printf("Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[0].minibar,hotel[0].tv,hotel[0].servis,hotel[0].jakuzi,money[0].price);
            }
            else if(single==2){
				hotel[0].minibar='+';
                hotel[0].tv='+';
				hotel[0].servis='-';
				hotel[0].jakuzi='-';
				money[1].price=200;
				printf("Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[0].minibar,hotel[0].tv,hotel[0].servis,hotel[0].jakuzi,money[1].price);
            	
			}
			else if(single==3){
				hotel[0].minibar='+';
                hotel[0].tv='+';
				hotel[0].servis='+';
				hotel[0].jakuzi='+';
				money[2].price=300;
				printf("Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[0].minibar,hotel[0].tv,hotel[0].servis,hotel[0].jakuzi,money[2].price);
			}
			
}
else if(oda_sec==2){
	FILE *cift;
   	cift=fopen("cift.txt","r");

	  fgets (smb,150,cift)!=NULL; 
     	puts(smb);
      fgets (derece2.minibar,150,cift)!=NULL; 
        puts(derece2.minibar);
      fgets(derece2.tv,150,cift)!=NULL;
        puts(derece2.tv);
      fgets (derece2.servis,150,cift)!=NULL; 
        puts(derece2.servis);
      fgets (derece2.jakuzi,150,cift)!=NULL; 
        puts(derece2.jakuzi);
       fgets(derece2.price,150,cift)!=NULL;
	    puts(derece2.price);		 
 fclose(cift);
 
printf("Please select your room rating:");
scanf("%d",&dooble);
printf("Your room:\nHas=+\nHas not=-\n");
			if(dooble==1){
                hotel[1].minibar='+';
                hotel[1].tv='-';
				hotel[1].servis='-';
				hotel[1].jakuzi='-';
				money[3].price=400;
				printf("Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[1].minibar,hotel[1].tv,hotel[1].servis,hotel[1].jakuzi,money[3].price);
            }
            else if(dooble==2){
			    hotel[1].minibar='+';
                hotel[1].tv='+';
				hotel[1].servis='-';
				hotel[1].jakuzi='-';
				money[4].price=500;
				printf("Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[1].minibar,hotel[1].tv,hotel[1].servis,hotel[1].jakuzi,money[4].price);
           }
            else if(dooble==3){
				hotel[1].minibar='+';
                hotel[1].tv='+';
				hotel[1].servis='+';
				hotel[1].jakuzi='+';
				money[5].price=600;
				printf("Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[1].minibar,hotel[1].tv,hotel[1].servis,hotel[1].jakuzi,money[5].price);
            }
}
else if(oda_sec==3){
FILE *aile;
   	aile=fopen("aile.txt","r");
	  fgets (smb,150,aile)!=NULL; 
     	puts(smb);
      fgets (derece3.minibar,150,aile)!=NULL; 
        puts(derece3.minibar);
      fgets(derece3.tv,150,aile)!=NULL;
        puts(derece3.tv);
      fgets (derece3.servis,150,aile)!=NULL; 
        puts(derece3.servis);
      fgets (derece3.jakuzi,150,aile)!=NULL; 
        puts(derece3.jakuzi);
      fgets(derece3.price,150,aile)!=NULL;
	    puts(derece3.price);
 fclose(aile);
printf("Please select your room rating:");
scanf("%d",&family);
printf("Your room:\nHas=+\nHas not=-\n");
			if(family==1){
                hotel[2].minibar='+';
                hotel[2].tv='-';
				hotel[2].servis='-';
				hotel[2].jakuzi='-';
				money[6].price=700;
				printf("Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[2].minibar,hotel[2].tv,hotel[2].servis,hotel[2].jakuzi,money[6].price);
            }
			else if(family==2){
				hotel[2].minibar='+';
                hotel[2].tv='+'; 
				hotel[2].servis='-';
				hotel[2].jakuzi='-';
				money[7].price=800;
				printf("Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[2].minibar,hotel[2].tv,hotel[2].servis,hotel[2].jakuzi,money[7].price);
            }
			else if(family==3){
				hotel[2].minibar='+';
                hotel[2].tv='+';
				hotel[2].servis='+';
				hotel[2].jakuzi='+';
				money[8].price=900;
				printf("Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[2].minibar,hotel[2].tv,hotel[2].servis,hotel[2].jakuzi,money[8].price);
            }

}
system("\npause");
system("cls");
system("COLOR C");
picture();

struct guest* g =  (struct guest*) malloc(sizeof(struct guest)); 
struct invoice* inv = (struct invoice*) malloc(sizeof(struct invoice)); 

int citizen;

printf("Enter your name:");
scanf("%s", g->name);

printf("Enter your surname:");
scanf("%s", g->surname);

do{
	printf("Are you a Turkish citizen?:\nYes:1 No:2\n");
	scanf("%d", &citizen);
}while((citizen < 1) || (citizen > 2));

if(citizen == 1){
  		printf("Enter your TC no:");
   		scanf("%s", g->TC);
}
else if(citizen == 2){
  		printf("Enter your passport:");
   		scanf("%s",g->passport);
   	   
   		*g->TC =0;
}

printf("Enter your phone number:");
scanf("%s", g->phone);


FILE *info;
info = fopen("info.txt","w");

inv->g = g;

int m;
for(m = 0; m<3; m++){
	inv->cIn[m] = check_in[m];
	inv->cOut[m] = check_out[m];
}
  fprintf(info,"Name:%s\nSurname:%s\nTC no:%s\nPassport no:%s\nPhone number:%s\n",inv->g->name,inv->g->surname,inv->g->TC,inv->g->passport,inv->g->phone);
if(x==1)
	fprintf(info,"Your hotel in ISTANBUL");
else if(x==2)
	fprintf(info,"Your hotel in BODRUM");
else if(x==3)
	fprintf(info,"Your hotel in MARMARIS");
else if(x==4)
	fprintf(info,"Your hotel in KEMER");
else if(x==5)
	fprintf(info,"Your hotel in ALANYA"); 

  fprintf(info,"\nCheck-in date:%d/%d/%d\n", inv->cIn[0], inv->cIn[1], inv->cIn[2]);
  fprintf(info,"Check-out date:%d/%d/%d\n", inv->cOut[0], inv->cOut[1], inv->cOut[2]);

if(oda_sec==1){
    if(single==1)
    	fprintf(info,"Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[0].minibar,hotel[0].tv,hotel[0].servis,hotel[0].jakuzi,money[0].price);
    else if(single==2)
		fprintf(info,"Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[0].minibar,hotel[0].tv,hotel[0].servis,hotel[0].jakuzi,money[1].price);
    else if(single==3)
    	fprintf(info,"Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[0].minibar,hotel[0].tv,hotel[0].servis,hotel[0].jakuzi,money[2].price);
}
else if(oda_sec==2){
	if(dooble==1)
      fprintf(info,"Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[1].minibar,hotel[1].tv,hotel[1].servis,hotel[1].jakuzi,money[3].price);
    else if(dooble==2)
      fprintf(info,"Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[1].minibar,hotel[1].tv,hotel[1].servis,hotel[1].jakuzi,money[4].price);
    else if(dooble==3)
      fprintf(info,"Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[1].minibar,hotel[1].tv,hotel[1].servis,hotel[1].jakuzi,money[5].price);
}
else if(oda_sec==3){
	if(family==1)
      fprintf(info,"Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[2].minibar,hotel[2].tv,hotel[2].servis,hotel[2].jakuzi,money[6].price);
    else if(family==2)
      fprintf(info,"Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[2].minibar,hotel[2].tv,hotel[2].servis,hotel[2].jakuzi,money[7].price);
    else if(family==3)
      fprintf(info,"Minibar:%c\nTV:%c\nService:%c\nJacuzzi:%c\nPrice:%d",hotel[2].minibar,hotel[2].tv,hotel[2].servis,hotel[2].jakuzi,money[8].price);	     
}
fclose(info);

info=fopen("info.txt","r");

printf("\nYour invoice is ready\n");

char ad;
while(!feof(info)){
	ad=fgetc(info);
	printf("%c",ad);
}

fclose(info);
getch();
}
