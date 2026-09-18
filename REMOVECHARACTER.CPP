#include<iostream.h>
#include<conio.h>
#includde<string.h>
void main()
{
	clrscr();
	char st1[20]="ajmer",st2[20]="rajasthan",st3[30];
	int i,j,len1=0,len2=0,k;
	for(i=0;st1[i]!='\0';i++)
	{
	len1++;
	}
	for(i=0;st2[i]!='\0';i++)
	{
	len2++;
	}
	while(len2>1)
	{
	k=0;
	for(i=k;i<len2;i++)
	{
	k++;
	if(i==len1)
	{
	i=k;
	continue;
	}
	st3[i]=st2[i];
	}
	strcpy(st3,st2);
	len2--;

	    }
	    cout<<endl<<st3;
	    getch();
	    }
