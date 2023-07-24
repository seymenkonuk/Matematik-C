#include <stdio.h>
#include <conio.h>
#include "matematik.h"

main() {
    printf("%d\n", usAlma(5, 7));
    printf("%d\n", faktoriyel(10));
    printf("%d\n", fibonacci(8));
    printf("%d\n", asalMi(353));
    printf("%d\n", mutlak(-24));
    printf("%d\n", tersi(5437));
    printf("%d\n", basamak(27678));
    printf("%f\n", karekok(645));
    printf("%d\n", yuvarla(5435345, 7));
    printf("%d\n", yuvarlaBasamak(6456453, 3));
    
    char metin[100];
    metneDonustur(256484, metin);
    printf("%s\n", metin);
    
    int dizi[10] = {2,3,7,42,23,43,1,9,12,-432}, i;
    printf("Orj dizi       : ");
    for (i=0; i<10; i++) printf("%d ", dizi[i]);
    
    sirala1(10, dizi, false);
    printf("\nBuyukten Kucuge: ");
    for (i=0; i<10; i++) printf("%d ", dizi[i]);
    
    sirala2(10, dizi, true);
    printf("\nKucukten Buyuge: ");
    for (i=0; i<10; i++) printf("%d ", dizi[i]);
    
    printf("\n%d", sayiAra(0, 10, dizi));
    printf("\n%d", ebob(24, 8223));
    printf("\n%d", ekok(24, 8223));
    printf("\n%d", cokEbob(10, dizi));
    printf("\n%d", cokEkok(10, dizi));
    printf("\n%d", enBuyukAsalBolen(5345354));
	while(1);
}
