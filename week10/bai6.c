#include <stdio.h>

void nhap(int arr[50][50], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("Nhap arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void nhaphangcot(int *m, int *n) {
	*m = 0, *n = 0;
	while(*m <= 0 && *n <= 0) {
		printf("Nhập số hàng, số cột: ");
		scanf("%d%d", m, n);
	}
}

void tong(int a[50][50], int b[50][50], int c[50][50], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void output(int c[50][50], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int m=3, n=3;
	int a[50][50], b[50][50], c[50][50];
	
	
	
	printf("\nNhap ma tran 1: \n");
	nhap(a, m, n);
	
	printf("\nNhap ma tran 2: \n");
	nhap(b, m, n);
	tong(a, b, c, m, n);
	
	printf("\nMa tran 1: \n");
	output(a, m, n);
	
	printf("\nMa tran 2: \n");
	output(b, m, n);
	
	printf("\nMa tran ket qua: \n");
	output(c, m, n);
	
	return 0;
}