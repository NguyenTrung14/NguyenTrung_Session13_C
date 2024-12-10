#include <stdio.h>
void UCLN(int a, int b) {
   	int min = a < b ? a : b;
	for(int i = min;i>0;i--){
		if((a % i==0) && (b % i==0)){
			printf("Uoc chung lon nhat cua 2 so ban nhap la : %d",i);
			break;
		}
	}
}

int main() {
    int number1, number2;
    printf("Nhap so thu nhat : ");
    scanf("%d", &number1);
    printf("Nhap so thu hai : ");
    scanf("%d", &number2);
    UCLN(number1, number2);
    return 0;
}

