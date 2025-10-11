
#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=0;i<=6;i++)
  {
   for(j=1;j<=i;j++)
   {
    printf(" ");
   }
   for(k=6;k>i*2-1;k--)
   {
    printf("*");
   }
   printf("\n");
  }
}

// amol@amol-HP-ProBook-440-G3:~$ gcc inverted_pyramid.c 
// amol@amol-HP-ProBook-440-G3:~$ ./a.out
// *******
//  *****
//   ***
//    *
