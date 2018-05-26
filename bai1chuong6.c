/*Xay dung chuong trinh quan li diem so don gian dua tren
chuong trinh mau voi yeu cau:
-su dung con tro de quan ly bo nho.
-khai bao dong so luong phan tu mang.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int so_Sv_Max=100;
	int *a,n;

	printf("Nhap so luong sinh vien (<%i)  ",so_Sv_Max);
	scanf("%i",&n);

	a=(int*)calloc(n,sizeof(int));
	printf("\nNhap diem cho sinh vien: \n\n");
	for(int i=0;i<n;i++)
	{
		printf("Sinh vien %i:  ",i+1);
		scanf("%i",&*(a+i));
	}
	free(a);

	return 0;
}
