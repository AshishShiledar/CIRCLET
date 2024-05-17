#include<stdio.h>
#include<conio.h>
void main()
{
int i,s,rows,j=0;
printf("ENTER A NUMBER TO DEFINE THE ROWS: \n");
scanf("%d",&rows);
for(i=0;i<=rows;i++)
{
	for(s=0;s<=rows-1;s++)
	{
		printf(" ");
	}
	for(j=0;j<=(2*i-1);j++)
	{
		printf("* ");
	}
	printf("\n");
}
getch();	
}