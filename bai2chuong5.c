// Viet chuong trinh tinh giai thua su dung de quy.

#include <stdio.h>

int nhap()
{
  int n;

  printf("Moi ban nhap: ");
  scanf("%i",&n);

  return n;
}

int giaithua(unsigned int n)
{
  if(n<=1)
  {
    return 1;
  }
  else
  {
    return (n*giaithua(n-1));
  }
}

void inra(unsigned int n)
{
  printf("Giai thua cua %i la: %i. \n",n,giaithua(n));
}

int main()
{
  int n=nhap();
  inra(n);
  return 0;
}
