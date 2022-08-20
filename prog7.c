#include <Stdio.h>
int main()
{
  int n;
  printf("enter no: ");
  scanf("%d",&n);
  if( n >= 0 )
  {
    printf("quation are real & distinct");
  }
  else
  {
    if (n <= 0)
    {
      printf("equation are equal or imaginary");
    }
    
  }
}
