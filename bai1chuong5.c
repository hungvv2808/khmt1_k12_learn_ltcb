// viet chuong trinh tinh gia tri bieu thuc voi ham.

#include <stdio.h>
#include <math.h>

float nhap()
{
  float n;
  printf("Moi ban nhap: ");
  scanf("%f",&n);
  
  return n;
}

float tinh(float x, float n)
{
  float kq=0;
  kq=(float)(pow(x,n)+pow(n,x))/pow(x+1,n+1);

  return kq;
}

void inra(float ketqua)
{
  printf("Ket qua cua phep tinh la: %f \n",ketqua);
}

float main()
{
  float x=nhap();
  float n=nhap();
  float ketqua= tinh(x,n);
  inra(ketqua);

  return 0;
}
