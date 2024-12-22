#include<stdio.h>
#include<string.h>

int main(){
	const char *matkhau = "giakhanhcute";
	char s[12];
	printf("nhap mat khau: ");
	scanf("%s", s);
	if(strcmp(matkhau, s) == 0){
		printf("mat khau dung\n");
	}else{
		printf("matkhausai\n");
	}
	return 0;
}


