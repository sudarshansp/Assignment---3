#include <stdio.h>
int main()
{
  int n;
  printf("enter teo no: ");
  scanf("%d",&n);
  if( n > 99 & n < 999 )
  {
    printf("Three digit No");
  }
  else
  {
    printf("not three digit");
  }
  return 0;
}
