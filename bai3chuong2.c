// Kiem tra do dai ba doan thang co tao thanh tam giac hay khong?

#include <stdio.h>

int main()
{
  float a,b,c;

  printf("Moi ban nhap do dai canh thu nhat: ");
  scanf("%f",&a);
  printf("Moi ban nhap do dai canh thu hai: ");
  scanf("%f",&b);
  printf("Moi ban nhap do dai canh thu ba: ");
  scanf("%f",&c);

  if( a<b+c && b<a+c && c<a+b )
  {
    printf("Do dai ba canh %.2f, %.2f va %.2f tao thanh mot tam giac. \n",a,b,c);
  }
  else
  {
    printf("Do dai ba canh %.2f, %.2f va %.2f khong tao thanh mot tam giac. \n",a,b,c);
  }

  return 0;
}
