#include<stdio.h>

int main(){
	int thang, nam, namnhuan = 0;
	printf("nhap nam: ");
	scanf("%d", &nam);
	printf("nhap thang: ");
	scanf("%d", &thang);
	if((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0){
		namnhuan = 1;
	}
	if(thang < 1 || thang > 12){
	printf("thang khong hop le\n");
    }
	int ngaytrongthang;
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		ngaytrongthang = 31;
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		ngaytrongthang = 30;
		break;
		case 2:
		int (namnhuan == 1)?ngaytrongthang = 29: ngaytrongthang = 28;
		break;
		default:
		return 0;
	}
	printf("thang %d nam %d co %d ngay\n",thang,nam,ngaytrongthang);
	return 0;
}
