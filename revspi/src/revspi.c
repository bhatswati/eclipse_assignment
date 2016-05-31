/*
 ============================================================================
 Name        : revspi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int n;
int mat[100][100];
int i,j;
int k, R, D, L, T;


void main()
{
printf("enter the order of the matrix\n");
scanf("%d", &n );

printf("enter the matrix elements\n");
for(i=0;i<n; i++)
{
	for(j=0;j<n;j++)
	{
	printf("%d""%d",i,j);
	printf(" ");
	scanf("%d",&mat[i][j]);
	}
}

printf("the elements of");
printf(" ");
printf("%d",n);
printf("*");
printf("%d",n );
printf(" ");
printf("matrix are:\n");
for(i=0;i<n; i++)
{
	for(j=0;j<n;j++)
	{
	printf("%d""%d",i,j);
	printf(" ");
	printf("%d\n",mat[i][j]);
	}
}

int i,j;
k=T=R=(n-1)/2;  //k is midpoint, R is right pointer, T is top(up) pointer
L=k-1;   // L is left pointer
D=k+1;   //D is down pointer

printf("the elements of the matrix in reverse spiral order are:\n");


//if order is n, then the (left, down, right, up) operations are performed (n-1)/2 times excluding the 1st row
for(j=0; j<(n-1)/2; j++)
{
//	moving left
	for(i=R; i>L; i--)
	{
	printf("%d""%d",T,i);
	printf(" ");
	printf("%d\n", mat[T][i]);
	}
	R++;

//	moving down
	for(i=T; i<D; i++)
	{
	printf("%d""%d",i,L);
	printf(" ");
	printf("%d\n",  mat[i][L]);
	}
	T--;

//	moving right
	for(i=L; i<R; i++)
	{
	printf("%d""%d",D,i);
	printf(" ");
	printf("%d\n", mat[D][i]);
	}
	L--;

//	moving up
	for(i=D; i>T; i--)
	{
	printf("%d""%d",i,R);
	printf(" ");
	printf("%d\n", mat[i][R]);
	}
	D++;

}


//to print 1st row

for(i=R; i>=0; i--)
{
printf("%d""%d",T,i);
printf(" ");
printf("%d\n", mat[T][i]);
}

}
