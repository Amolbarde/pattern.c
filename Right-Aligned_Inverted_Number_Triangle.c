#include<stdio.h>
int main()
{
 int i,j,k;
 for(i=5;i>=1;i--)
 {
  for(k=5;k>i;k--)
  {
   printf(" ");
  }
  for(k=1;k<=i;k++)
  {
   printf("%d",k);
  }
  printf("\n");
 }
}
/*
12345
 1234
  123
   12
    1
*/
