#include <stdio.h>


int main() {

	int dia, mes, a�o;

	printf("Que dia naciste: ");
	scanf_s("%d", &dia);
	printf("Que mes naciste: ");
	scanf_s("%d", &mes);
	printf("Que a�o naciste:");
	scanf_s("%d", &a�o);

	int sum = dia + mes + a�o;

	printf("%d+%d+%d=%d", dia, mes, a�o, sum);


}