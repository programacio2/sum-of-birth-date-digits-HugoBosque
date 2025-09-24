#include <stdio.h>


int main() {

	int dia, mes, año;

	printf("Que dia naciste: ");
	scanf_s("%d", &dia);
	printf("Que mes naciste: ");
	scanf_s("%d", &mes);
	printf("Que año naciste:");
	scanf_s("%d", &año);

	int sum = dia + mes + año;

	printf("%d+%d+%d=%d", dia, mes, año, sum);


}