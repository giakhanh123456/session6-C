#include<stdio.h>

int main(){
	int n, so;
	printf("nhap so nguyen duong n: ");
	scanf("%d", &n);
	for(int a = 0, b = 1, i = 0; i < n; i++){
		if(i == 0){
			printf("%d\n", a);
		}else if(i == 1){
			printf("%d\n", b);
		}else{
			so = a + b;
			printf("%d\n", so);
			a = b;
			b = so;
		}
	}
}
