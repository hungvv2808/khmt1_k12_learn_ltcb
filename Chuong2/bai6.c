// Tinh tong cac chu so cua 1 so.

#include <stdio.h>

int main()
{
  int n;
  int tong=0;

  printf("Nhap vao mot so: ");
  scanf("%i",&n);

  while(n!=0)
  {
    tong+=n%10;
    n=n/10;
  }

  printf("Tong cac chu so cua n la: %d \n",tong);
  return 0;
}
