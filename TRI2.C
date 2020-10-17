#include<stdio.h>

void main()
{
  int i,j, k;
  clrscr();

  for(i = 0; i<=24; i++)
  {
     for(k = 24; k>=i; k--)
     {
	printf(" ");
     }
     for(j = 1; j <=i; j++)
       printf("*");
     printf("\n");
  }

  getch();
}