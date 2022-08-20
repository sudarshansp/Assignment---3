#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  n = n % 2;
  if( n == 0 )
  {
    printf("even no");
  }
  else
  {
    printf("odd no");
  }
  return 0;
}
