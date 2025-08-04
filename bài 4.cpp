#include <stdio.h>
int main(){
	int so_dien_da_dung;
	printf("nhap gia tri cua so dien :");
	scanf("%d",&so_dien_da_dung);
	int tien;
	
	if (so_dien_da_dung <= 50) {
        tien =  1678;
    } else if (51<=so_dien_da_dung <= 100) {
        tien = 1734;
    } else if (101<=so_dien_da_dung <= 200) {
        tien = 2014;
    } else if(so_dien_da_dung>200){
	    tien =2536;
    }else{
    	printf("ko hop le");
	}
	int so_tien_phai_tra;
	so_tien_phai_tra=so_dien_da_dung*tien;
	printf("so tien phai tra:%d",so_tien_phai_tra);
}