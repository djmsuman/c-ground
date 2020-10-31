#include<stdio.h>
#include<conio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],row,coloumn;
	printf("Enter 9 numbers for 1st matrix:\n");
	for(row=0;row<=2;row++)
	for(coloumn=0;coloumn<=2;coloumn++)
	scanf("%d",&a[row][coloumn]);
	printf("Enter 9 numbers for 2 matrix:\n");
	for(row=0;row<=2;row++)
	for(coloumn=0;coloumn<=2;coloumn++)
	scanf("%d",&b[row][coloumn]);
	for(row=0;row<=2;row++)
	{
	for(coloumn=0;coloumn<=2;coloumn++)
	{
	c[row][coloumn]=a[row][coloumn]+b[row][coloumn];
	printf("%d",c[row][coloumn]);
	}
	printf("\n");
	}
	getch();
}
