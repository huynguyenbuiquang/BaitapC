#include<stdio.h>
int n;

void NhapN(){
	printf("Nhap n: ");
	scanf("%d",&n);
	while(n<5 || n>10){
		printf("Nhap lai n: ");
		scanf("%d",&n);
	}
}

int giaithua(int x){
	int gt=1;
	for(int i=1;i<=x;i++){
		gt=gt*i;
	}
	return gt;
}

int tongGT(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=giaithua(i);
	}
	return sum;
}

int main(){
	NhapN();
	printf("Tong n giaithua = %d",tongGT(n));
	return 0;
}
