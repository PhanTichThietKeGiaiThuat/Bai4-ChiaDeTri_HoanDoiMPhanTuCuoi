#include<conio.h>
#include<stdio.h>

/*Ho�n d?i c�c ph?n t? trong m?ng*/
void Exchange(int a[], int i, int j, int m,int n) {
	for (int p = n-1; p >n-m-1 ; p--)
	{
		int c = a[p-i];
		a[p-i] = a[p-j];
		a[p-j] = c;
	}
}
//
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

//
void Tran(int a[], int n, int m) {
	int i = m, j = n - m;
	
	while (i != j) {
		if (i > j) {
			Exchange(a, m - i, m, j,n );	
			i = i - j;
		}
		else {
			j = j - i;
			Exchange(a, m - i, m + j, i,n);
		}
	}
	Exchange(a, m - i, m, i,n);
}
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10};
	Tran(a, 10, 6);
	printf("\nXuat ");
	xuat(a, 10);
	_getch();


}
