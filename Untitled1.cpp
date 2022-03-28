#include<stdio.h>
void Nhap(int a[100], int n){
	printf("\n\tNhap phan tu mang:");
	for(int i=0;i<n;i++){
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void Xuat(int a[100], int n){
	printf("Mang vua nhap la:");
	for(int i=0;i<n;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
}
int main(){
	int a[100], n;
	printf("Nhap so phan tu mang:");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n);
}
