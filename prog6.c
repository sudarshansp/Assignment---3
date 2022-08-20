#include <stdio.h>
int main()
{
  int a,b;
  printf("enter two no: ");
  scanf("%d %d",&a,&b);
  if( a == b )
  {
    printf("%d & %d both are same",a,b);
  }

  if( a > b )
  {
      printf("%d is grater",a);
  }

  if( a < b )
  {
      printf("\n");
      printf("%d is grater",b);
  }
  return 0;
}
