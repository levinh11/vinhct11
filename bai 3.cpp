#include <stdio.h>
int main(){
	int A;
	printf ("nhap canh A:");
	scanf("%d",&A);
	int B;
	printf ("nhap canh B:");
	scanf("%d",&B);
	int C;
	printf("nhap canh C:");
	scanf("%d",&C);
	if(A+B>C||A+C>B||C+B>A){
		printf("la tam giac");
	}
	else{
		printf("ko la tam giac");
	}
	
}