#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE*dosya; char isim[150],soyad[150];   dosya=fopen("bilgi.txt","a");
	char* karakter="ABCDEFGHIJKLMNOPRSTUVYZ1234567890";
	int say=strlen(karakter);   int i,rasgele;
	printf("OLUSTURULAN SIFRE    :");  srand(time(NULL));
	for(i=0;i<8;i++){
		int rastgele=rand()%say;
		printf("%c",karakter[rastgele]);
		fprintf(dosya,"%c",karakter[rastgele]);
	}
	printf("\nMUSTERININ ADINI GIRINIZ    :");  gets(isim);
	printf("MUSTERININ SOYADINI GIRINIZ    :");  gets(soyad);
	fprintf(dosya,"\t%s%s\n",isim,soyad);   close(dosya);
	return 0;
}
