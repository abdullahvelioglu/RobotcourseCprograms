#include <stdio.h>


int main(void)
{
	float t=0,sayi;
	int i;
	for(i=0;i<8;i++){
		printf("Lütfen %d\'inci sayiyi giriniz.\n",i+1);
		scanf("%f",&sayi);
		t+=sayi;
	}
	printf("Girilen sayıların ortalaması %f'dir.\n",t/8);

}
