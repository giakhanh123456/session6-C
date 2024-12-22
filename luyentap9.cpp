#include<stdio.h>
#include<math.h>

int main(){
	int sum, hangtram, hangchuc, hangdonvi;
	printf("cac so armstrong co 3 chu so la: ");
	for(int i = 100; i <= 999; i++){
		hangtram = i / 100;
		hangchuc = (i / 10) % 10;
		hangdonvi = i % 10;
		sum = pow(hangtram,3) + pow(hangchuc,3) + pow(hangdonvi,3);
		if(i == sum){
			printf("%d\n", sum);
		}
	}
	return 0;
}
