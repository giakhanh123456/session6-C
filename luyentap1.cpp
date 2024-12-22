#include<stdio.h>

int main(){
	int n,sum;
	printf("nhap 5 so nguyen: ");
    for(int i = 1; i <= 5; i++){
    	printf("nhap so nguyen thu %d: ", i);
    	scanf("%d", &n);
    	if(n % 2 != 0){
    		sum += n;
		}
	}
	printf("tong cac so le la %d\n", sum);
	return 0;
}
