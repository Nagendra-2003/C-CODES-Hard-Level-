#include<iostream.h>
#include<conio.h>
#include<string.h>
char* check(char string[],char a)
{
       static  char q[20];
       char sum;
       int i;
       for(i=0;string[i]!='\0';i++)
       {

	   sum=string[i]+a;
	   if(sum>64 && sum<=90 || sum>96 && sum<=122)
	   {
	   q[i]=string[i]+a;
	   }
	   else
	   {
	   q[i]=string[i];
	   }
	   }
	   return q;
	   }
	   void main()
	   {
		clrscr();
		char string[20],name,*s;
		cout<<"enter string";
	       cin.getline(string,20);
	       cout<<"enter variable";
	       cin>>name;
	      s=check(string,name);
	      cout<<s;
		getch();
		}
			  

int check( char string[],char a)
{
	int i,count=0;
	for(i=0;string[i]!='\0';i++)
	{
	if(string[i]>a)
	{
	count++;
	}
	}
	return count ;
 }
  void main()
  {
       clrscr();
       int ans;
       ans=check("artiest",'e');
       cout<<endl<<ans;
       getch();
       }                    
