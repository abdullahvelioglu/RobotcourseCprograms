#include <stdio.h>
#include <math.h>

float cevrehesapla(int,int,int);
float alanhesapla(int,int,int);

int main(void)
{
	int kenar1,kenar2,kenar3;
	printf("Lütfen üçgenin kenarlarından 1.\'sini giriniz.\n");
	scanf("%d",&kenar1);
	printf("Lütfen üçgenin kenarlarından 2.\'sini giriniz.\n");
    scanf("%d",&kenar2);
    printf("Lütfen üçgenin kenarlarından 3.\'üncüsünü giriniz.\n");
    scanf("%d",&kenar3);
    printf("Ucgenin cevresi %f'dir\n",cevrehesapla(kenar1,kenar2,kenar3));
    printf("Ucgenin alani %f'dir\n",alanhesapla(kenar1,kenar2,kenar3));

	return 0;
}


float cevrehesapla(int a,int b,int c){
return a+b+c;
};

float alanhesapla(int a,int b,int c){
float u=(cevrehesapla(a,b,c)/2);
return sqrt(u*(u-a)*(u-b)*(u-c));
};