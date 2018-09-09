#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int detail();
int pizza();
int softdrink();
int desserts();
int bill(int,int,int);

main()
{   
printf("\n                            WELCOME TO PIZZA HUT\n\n");
detail();
int a,b;
int c,r;
printf("\n\n  You want your order online or offline(0 or 1)::");
scanf("%d",&r);
printf("\n\n");
if(r==0)
{ 
  printf("  ONLINE PORTAL IS LOADING................");
getche();
system("start https://online.pizzahut.co.in/");

}
else
{ 
char g;

 printf("Which type of pizza you want ?\n");
 printf("\n1. Veggie supreme\n\n2. Tandoori Paneer\n\n3. Chicken Tikka\n\n4. Margherita\n\n5. Classic Chicken\n\n6. Exotica\n");
a=pizza();
b=softdrink();
getche();
system("cls");
c=desserts();
bill(a,b,c);
}

}


int detail()
{ char n[20];
  long cn;
  system("COLOR F");

printf("\n\n\tCostumer name :");
scanf("%s",&n);

printf("\n\n\tContact No.");
scanf("%ld",&cn);
 printf("\n\t\t  SAVED");
 getche();


printf("\n\n\tHi!! %s Pizza hut welcomes you.......\n\n",n);
}

int pizza()
{ int n,p,s[]={110,105,124,113,140,148},t[]={180,220,258,290,300,348,400},u[]={428,440,487,498,508,530},total=0,i;
  char c,ch;


 
 scanf("%d",&p);
 printf("\nEnter size of pizza large ,medium or small::");
 c=getche();
 printf("\n\nHow many pizza you want to order::");
 scanf("%d",&n);

 switch(p)
{
case 1:  switch(c)
	{ case 's':printf("\n\nYou have ordered %d small Veggie supreme pizza.",n);
	             total=total+n*s[p-1];
	             
	             break;
	   case 'm':  printf("\n\nYou have ordered %d medium Veggie supreme pizza.",n);
	             total=total+n*t[p-1];    
				 break;
       case 'l':		printf("\n\nYou have ordered %d large Veggie supreme pizza.",n);
	             total=total+n*u[p-1]; 
				 break;   		     
	           
	} break;
case 2: switch(c)
        { case 's':printf("\n\nYou have ordered %d small Tandoori Paneer pizza.",n);
	             total=total+n*s[p-1];
	             
	             break;
	   case 'm':  printf("\n\nYou have ordered %d medium Tandoori Paneer pizza.",n);
	             total=total+n*t[p-1];    
				 break;
       case 'l':		printf("\n\nYou have ordered %d large Tandoori Paneer pizza.",n);
	             total=total+n*u[p-1]; 
				 break;   	
			}	break;
	   case 3:	switch(c)
        { case 's':printf("\n\nYou have ordered %d small Chicken Tikka.",n);
	             total=total+n*s[p-1];
	             
	             break;
	   case 'm':  printf("\n\nYou have ordered %d medium Chicken Tikka.",n);
	             total=total+n*t[p-1];    
				 break;
       case 'l':		printf("\n\nYou have ordered %d large Chicken Tikka.",n);
	             total=total+n*u[p-1]; 
				 break;   	
			}	break;
	case 4:	 switch(c)
     { case 's':printf("\n\nYou have ordered %d small Margherita pizza.",n);
	             total=total+n*s[p-1];
	             
	             break;
	   case 'm':  printf("\n\nYou have ordered %d medium Margherita pizza.",n);
	             total=total+n*t[p-1];    
				 break;
       case 'l':		printf("\n\nYou have ordered %d large Margherita pizza.",n);
	             total=total+n*u[p-1]; 
				 break;   	
			}		break;
case 5:switch(c)
        { case 's':printf("\n\nYou have ordered %d small Classic Chicken pizza.",n);
	             total=total+n*s[p-1];
	             
	             break;
	   case 'm':  printf("\n\nYou have ordered %d medium Classic Chicken pizza.",n);
	             total=total+n*t[p-1];    
				 break;
       case 'l':		printf("\n\nYou have ordered %d large Classic Chicken pizza.",n);
	             total=total+n*u[p-1]; 
				 break;   	
			}	break;
case 6:switch(c)
        { case 's':printf("\n\nYou have ordered %d small Exotica pizza.",n);
	             total=total+n*s[p-1];
	             
	             break;
	   case 'm':  printf("\n\nYou have ordered %d medium Exotica pizza.",n);
	             total=total+n*t[p-1];    
				 break;
       case 'l':		printf("\n\nYou have ordered %d large Exotica pizza.",n);
	             total=total+n*u[p-1]; 
				 break;   	
			}	      break; 
default: printf("Invalid Choice...try again");
          getche();
          printf("\n\nChoice::");
          
         total=total+pizza();			  
	 }
 printf("\n\n\tAnother order ::");
 scanf("\n%c",&ch);
 if(ch=='y'||ch=='Y')
 {
 	printf("\n\t\tChoice::");
 	total=total+pizza();
 }
  system("cls");
 
  return total;
}

int softdrink()
 { int n,p;
 int a[6]={35,45,60,30,65,55},total=0;

printf("\n\nAny softdrink you want:\n\n1: Champagne cola \n\n2: Birch Beer \n\n3: Blackberry \n\n4: Pomegranate \n\n5: Strawberry \n\n6: Root beer ");


scanf("%d",&n);


printf("\nNo. of soft drinks::");
scanf("%d",&p); 
getche();
switch(n)
{ case 1: printf("\n You have selected %d Champagne cola.\n\n Price of each=%d",p,a[0]);
           total=total+p*a[0];
           break;
  case 2: printf("\n You have selected %d Birch Beer.\n\n Price of each=%d",p,a[1]);
           total=total+p*a[1];   
		   break;   
  case 3: printf("\n You have selected %d Blackberry.\n\n Price of each=%d",p,a[2]);
           total=total+p*a[2];
           break;
  case 4: printf("\n You have selected %d Pomegranate.\n\n Price of each=%d",p,a[3]);
           total=total+p*a[3];
           break;
  case 5: printf("\n You have selected %d Strawberry.\n\n Price of each=%d",p,a[4]);
           total=total+p*a[4];
           break;
  case 6: printf("\n You have selected %d Root beer.\n\n Price of each=%d",p,a[5]);
           total=total+p*a[5];
           break;
  default: printf("\n Inavalid Choice....try again"); 
  	          getche();
  	          system("cls");
             total=total+softdrink();      
			 
 
 		   		   		   		   		      
}
getche();
system("cls");
return total;


}

int desserts()
{ int n,p;
 int a[3]={79,70,49},total=0;

printf("\n\nDESSERTS::\n\n1: Choco Mousse \n\n2: Choco Truffle \n\n3: Choco Volcano Cake ");


scanf("%d",&n);


printf("\nNo. of item::");
scanf("%d",&p); 
switch(n)
{ case 1: printf("\n You have selected %d Choco mouse.\n\n Price of each=%d",p,a[0]);
           total=total+p*a[0];
           break;
  case 2: printf("\n You have selected %d Choco Truffle Cake.\n\n Price of each=%d",p,a[1]);
           total=total+p*a[1];   
		   break;   
  case 3: printf("\n You have selected %d Choco Volcano Cake.\n\n Price of each=%d",p,a[2]);
           total=total+p*a[2];
           break;
 
  default: printf("\n Inavalid Choice....try again"); 
  	          getche();
  	          system("cls");
             total=total+desserts();      
			 
 
 		   		   		   		   		      
} 
getche();
return total;


}
int bill(int x,int y,int z)
{ int sum;
  sum=x+y+z;
  system("cls");
  printf("\n\nTotal amount of pizza::%d",x);
  printf("\n\nTotal amount of bevearages::%d",y);
  printf("\n\nTotal amount of desserts::%d",z);
  printf("\n\nTotal Payable amount:: %d",sum);
  if(sum>1000)
  {
  printf("\n\nYou get cashback of 50Rs... ");
  sum=sum-50;
  printf("\n\nNow payable amount ::%d",sum);}
  else if(sum>2000)
  {
  printf("\n\nYou get cashback of 100Rs... ");
  sum=sum-100;
  printf("\n\nNow payable amount ::%d",sum);}
  getche();
  printf("\n\n\t**** THANKS FOR YOUR PRECIOUS TIME *****");
  printf("\n\n\t************* VISIT AGAIN **************");
}


