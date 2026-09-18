#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
	int i,len=0,j,len1=0,temp,m;
	char string[20],string2[20],x[10] ;
	cout<<"enter string";
	cin>>string;
      //cin.getline(string,20);
	for(i=0;string[i]!='\0';i++)
	{
	len++;
	}
	for(i=0;i<len-1;i++)
	{
	for(j=i+1;j<len;j++)
	{
	if(string[i]>string[j])
    {
    temp=string[i];
    string[i]=string[j];
    string[j]=temp;
    }
    }
    }
	 int flag=0;
	for(i=0;i<len;i++)
	{
	if(string[i]=='a' || string[i]=='e' || string[i]=='i'|| string[i]=='o' || string[i]=='u')
	{
	      if(string[i]!=string[i-1])
	      {

		    flag++;
	   cout<<endl<<string[i] ;
	      }

	   }
	   }
	   cout<<endl<<"lenth of string is :"<<len;
	   if(flag==5)
	   {
	   cout<<endl<<"yes all vowels are present";
	   }
	   else
	   {
	   cout<<endl<<"No: all vowels are not present";
	   }

	getch();

	}