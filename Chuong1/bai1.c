/*Debai: viet ra 1 chuong trinh in ra 1 menu va cho chon nhu sau:
in ra 1 danh sach 10 lua chon tu 1->10,
cac lua chon co noi dung: luachon: %i(:1->10),
chon 0 de thoat.*/

#include <stdio.h>

int main()
{
  int chon;

  printf("\t***MENU*** \n");
  for(int i=1;i<=10;i++)
  {
    printf("\t%i. Lua chon %i \n",i,i);
  }
  printf("\t0. Thoat \n");

  printf("\n\tMoi ban lua chon: ");
  scanf("%i",&chon);
  printf("\tBan vua chon chuc nang: %i \n",chon);
  return 0;
}
