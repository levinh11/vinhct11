#include <iostream>
#include <cmath>
int main(){
	int a;
	printf("nhap gia tri cua a:");
	scanf("%d",&a);
	int b;
	printf("nhap gia tri cua b:");
	scanf("%d",&b);
	int c;
	printf("nhap gia tri cua c:");
	scanf("%d",&c);
	double delta = b * b - 4 * a * c;
	int x;
	if (delta < 0) {
            printf("phuong trinh vo nghiem");
        } else if (delta == 0) {
            x = -b / (2 * a);
            printf("phuong trinh co nghiem kep voi x=%d",x);
        } else if (delta>0){
        double x1 ;
        double x2;
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        	printf("phuong trinh co 2 nghiem voi x1=%d va x2=%d",x1,x2);
    }else{
    	printf("ko hop le");
	}
        	
}