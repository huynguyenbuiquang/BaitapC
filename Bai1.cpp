//Nhap vao 1 so n tu ban phim thoa dieu kien 5<n<10
//Tinh tong cac so 1+2+3+...+n
#include<stdio.h>
int n;	//Bien toan cuc


void NhapN(){
	printf("Nhap n: ");
	scanf("%d",&n);
	while(n<=5 || n>=10){
		printf("Nhap lai n: ");
		scanf("%d",&n);
	}
}

int Tong(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			sum+=i;
		}
	}
	return sum;
}
 
int main(){
	NhapN();
	printf("Tong n = %d",Tong(n));
	return 0;
}

