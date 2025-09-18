#include<stdio.h>
int main()
{
 int i,j,k;
 for(i=0;i<6;i++)
 {
  for(j=5;j>i;j--)
  {
   printf(" ");
  }
  for(k=1;k<=i*2-1;k++)
  {
  printf("%d",j);
  }
  printf("\n");
 }
}

