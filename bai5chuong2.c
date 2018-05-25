// Kiem tra 1 so co la so nguyen to khong.

#include <stdio.h>
#include <math.h>

int main()
{
  int a,i;
  int dem=0;

  printf("Moi ban nhap vao mot so: ");
  scanf("%i",&a);

  if(a<2)
  {
    printf("So %i vua nhap khong la so nguuyen to. \n",a);
  }
  else
  {
    for(i=2;i<=sqrt(a);i++)
    {
      if(a%i==0)
      {
        dem++;
      }
    }

   if(dem==0)
   {
     printf("So %i vua nhap la so nguyen to. \n",a);
   }
   else
   {
     printf("So %i vua nhap khong la so nguyen to. \n",a);
   }
  }
return 0;
}
