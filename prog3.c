#include <stdio.h>
int main()
{
  int n,a;
  printf("enter a number: ");
  scanf("%d",&n);
  a = n % 5;
  if( a == 0)
  {
    printf("divisable");

  } 
 else
  {
    printf("not divisable");

  }  
}
