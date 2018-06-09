// Kiem tra mot so co la so chinh phuong khong?

#include <stdio.h>
#include <math.h>

int main()
{
  int m,n;

  printf("Moi ban nhap vao mot so: ");
  scanf("%i",&m);

  n=sqrt(m);
  if(n*n==m)
  {
    printf("So %i vua nhap la so chinh phuong. \n",m);
  }
  else
  {
    printf("So %i vua nhap khong la so chinh phuong. \n",m);
  }

  return 0;
}
