#include<stdio.h>
#include<math.h>


int main(){
	int n, songuyento = 0;
	int count = 0;
	int num = 2;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
    if(n < 1){
    printf("khong co so nguyen to nao\n");
    return 0;
	}
    printf("%d so nguyen to dau tien la: ", n);
    while(count < n){
    songuyento = 0;
    for(int i = 2; i <= sqrt(num); i++){
		if(num % i == 0){
		songuyento = 1;
		break;
        }
    }
	 	if(songuyento == 0){
		printf("%d ", num);
		count++;
        }
        num++;
    }
	 return 0;
}
