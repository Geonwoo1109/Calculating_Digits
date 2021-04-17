#include <stdio.h>

int main() {
	int Num, Sum=0;
	
	printf("원하는 수: ");
	scanf("%d", &Num);
	
	int i;
	while (Num!=0) {
		Sum = Sum + Num%10;
		Num = Num/10;
	}
	
	printf("%d", Sum);
}
