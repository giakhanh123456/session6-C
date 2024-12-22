#include<stdio.h>

int main(){
	float sothang, laisuat, sotien, tienlai, tongtienlai;
	printf("tien ban dau la: ");
	scanf("%f", &sotien);
	printf("lai suat la: ");
	scanf("%f", &laisuat);
	printf("so thang gui la: ");
	scanf("%f", &sothang);
	for(int i = 1; i <= sothang; i++){
		tienlai = sotien * (laisuat/100);
	    sotien = sotien + tienlai;
	    tongtienlai = tongtienlai + tienlai;
	}
		printf("so tien lai = %.3f\n", tongtienlai);
		printf("tien nhan duoc = %.3f\n", sotien);
		return 0;
}
