#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	double odev1, odev2, odev3, quiz1, quiz2, quiz3, araSinav1, araSinav2, final, ortalama;

	printf("Odev 1: ");
	scanf("%lf", &odev1);

	printf("\nOdev 2: ");
	scanf("%lf", &odev2);

	printf("\nOdev 3: ");
	scanf("%lf", &odev3);

	printf("\nQuiz 1: ");
	scanf("%lf", &quiz1);

	printf("\nQuiz 2: ");
	scanf("%lf", &quiz2);

	printf("\nQuiz 3: ");
	scanf("%lf", &quiz3);

	printf("\nAra Sinav 1: ");
	scanf("%lf", &araSinav1);

	printf("\nAra Sinav 2: ");
	scanf("%lf", &araSinav2);

	printf("\nFinal: ");
	scanf("%lf", &final);

	ortalama = (odev1+odev2+odev3)*0.03+(quiz1+quiz2+quiz3)*0.07+(araSinav1+araSinav2)*0.15+final*0.4;

	printf("\nOrtalama: %.2lf", ortalama); 

	return 0;
	
}	