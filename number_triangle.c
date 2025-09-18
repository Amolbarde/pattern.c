#include<stdio.h>
int main()
{
 int i,j;
 int n=0;
 for(i=1;i<8;i++)
 {
  for(j=1;j<i;j++)
  {
   printf("%d",j);
   n++;
  }
  printf("\n");
 }
}
