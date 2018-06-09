// Liet ke cac uoc so cua mot so.

#include <stdio.h>

int main()
{
  int a;

  printf("Moi ban nhap vao mot so: ");
  scanf("%i",&a);

  printf("Cac uoc cua so %i la: ",a);
  for(int i=1;i<=a;i++)
  {
      if(a%i==0)
      {
        printf("%i, ",i);
      }
  }

  printf("\n");
  return 0;
}
