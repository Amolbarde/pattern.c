#include<stdio.h>
int main()
{
 int i,j,k;
 for(i=1;i<=5;i++)
 {
  for(j=5;j>=i;j--)
  {
   printf(" ");
  }
  for(k=1;k<=i*2-1;k++)
  {
   printf("%d",k);
  }
  printf("\n");
 }
}



//    1
//   121
//  12321
// 1234321
//123454321

