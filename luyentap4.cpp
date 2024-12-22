#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,denta;
	printf("nhap 3 so : ");
	scanf("%f %f %f",&a,&b,&c);
	printf("phuong trinh %.0fx^2 + %.0fx + %.0f = 0 ", a,b,c);
	denta = b * b - 4 * a * c;
	if(denta < 0){
	printf("vo nghiem\n");
    }if(denta == 0){
    	printf("co nghiem kep x1 = x2 = %.2f\n", -b / (2 * a));
	}if(denta > 0){
		printf("co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", (-b + sqrt(denta)) / (2 * a), (-b - sqrt(denta)) / (2 * a));
	}
	return 0;
}
