#include <stdio.h>
#include <math.h>

//sprt(x): tinh can bac 2 cua x va tra ve double
//pow(x,y):tinh x^y :tra ve double
//abs(x):tinh gia tri tuyet doi cua x
//cbrt(x):tinh can bac 3 tra ve double


// cac chu thich
//so nguyen
//int :2byte =16bit
//long long :8byte=64bite
//so thuc
//float:4byte
//double:8byte
//ki tu
//char: 1byte

//-kieu du lieu

//int :%d
//long long: %LLd
//float:%f
//double:%lf
//char:%c

//Bảng Mã ASCII
//A-Z:65-90
//a-z:97-122
//0-9:48-57

// 2 cau lenh vong lap
// for va while

int main (){
	int A;
	printf("nhap diem so :");
	scanf("%d",&A );
	
	if(A>=9){
		printf("hoc sinh xuat sac");
	}
	else {
		if(A>=8){
			printf("hoc sinh gioi");
		}
		else{
			if(A>=5){
				printf("hoc sinh trung binh");
			}
			else{
				if(A<5){
					printf("hoc sinh ngu");
				}
			}
		}
	}
}







	