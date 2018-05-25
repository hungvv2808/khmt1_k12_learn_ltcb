// Tinh uoc so chung lon nhat cua 2 so

#include <stdio.h>

int main()
{
  int a,b;
  int ucln=0;

  printf("Moi ban nhap vao so dau tien: ");
  scanf("%i",&a);
  printf("Moi ban nhap vao so thu hai: ");
  scanf("%i",&b);

  for(int i=1; i<=a || i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      ucln=i;
    }
  }

  printf("Uoc so chung lon nhat cua hai so %i va %i la: %i. \n",a,b,ucln);
  return 0;
}
