#include<stdio.h>

int main(){
	int n, sochan = 0, sole = 0;
	printf("nhap 5 so nguyen: ");
    for(int i = 1; i <= 5; i++){
    	printf("nhap so nguyen thu %d: ", i);
    	scanf("%d", &n);
    if(n % 2 == 0){
    	sochan++;
	  }else{
		sole++;
	  } 
    }
    printf("co %d so chan va %d so le\n", sochan, sole);
    return 0;
}
