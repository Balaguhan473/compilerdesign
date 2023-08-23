#include <stdio.h>
int main()
{
    char str[100];//input string with size 100

    int words=0,newline=0,characters=0; // counter variables

    scanf("%[^~]",&str);//scanf formatting    

    for(int i=0;str[i]!='\0';i++)
     { 
         if(str[i] == ' ')
         { 
              words++;
         }
         else if(str[i] == '\n')
         {
             newline++;
              words++;//since with every next line new words start. corner case 1
         }
         else if(str[i] != ' ' && str[i] != '\n'){
         characters++;
         }
     }
    if(characters > 0)//Corner case 2,3.
    {
        words++;
        newline++;
    }
     printf("Total number of words : %d\n",words);
     printf("Total number of lines : %d\n",newline);
     printf("Total number of characters : %d\n",characters);
    return 0;
}

Output:
void main()
{
int a;
int b;
a = b + c;
c = d * e;
}
Total number of words : 18
Total number of lines : 7

Exp. No. 18                          
Write a C program to implement the back end of the compiler.
Program:
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char a[50][50];
	printf("enter the no: intermediate code:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the 3 address code:%d:",i+1);
		for(j=0;j<6;j++)
		{
			scanf("%c",&a[i][j]);
		}
	}
	printf("the generated code is:");
	for(i=0;i<n;i++)
	{
		printf("\n mov %c,R%d",a[i][3],i);
		if(a[i][4]=='-')
		{
			printf("\n sub %c,R%d",a[i][5],i);
		}
		if(a[i][4]=='+')
		{
			printf("\n add %c,R%d",a[i][5],i);
		}
		if(a[i][4]=='*')
		{
			printf("\n mul %c,R%d",a[i][5],i);
		}
		if(a[i][4]=='/')
		{
			printf("\n div %c,R%d",a[i][5],i);
		}
		printf("\n mov R%d,%c",i,a[i][1]);
		printf("\n");
	}
	return 0;
}
