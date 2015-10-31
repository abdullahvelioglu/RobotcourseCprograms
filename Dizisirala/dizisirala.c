#include <stdio.h>


int main(void)
{
	int a[5];
	int d,i,j,g;
	for(d=0;d<5;d++){
		printf("a[%d]\'i giriniz.\n",d);
		scanf("%d",&a[d]);
	}
	printf("Girdiginiz dizi:\t");
	for(d=0;d<5;d++)
		printf("a[%d]=%d\t",d,a[d]);
	printf("\t\n");
	for(i=0;i<4;i++){
         for(j=i+1;j<5;j++){
	           if(a[j]<a[i]){
	                    g=a[i];
	                    a[i]=a[j];
	                    a[j]=g;
	           }
	     }

	}

	printf("Sirali dizi:\t\t");
	for(d=0;d<5;d++)
		printf("a[%d]=%d\t",d,a[d]);
	printf("\n");
	return 0;
}