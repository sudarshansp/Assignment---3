#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter three no: ");
  scanf("%d %d %d",&a,&b,&c);
  if(a > c & a > b)
  {
    printf("%d is grater",a);
  }
  if(b > c & b > a)
  {
    printf("%d is grater",b);

  }
  if (c > a & c > b)
  {
    printf("%d is grater",c);
  }
  return 0;
  
}
