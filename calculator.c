#include <stdio.h>
#include <stdlib.h>

void printMenu() {
    printf("\n=== HAMZA'NIN BASIT CALCULATOR'U ===\n");
    printf("1. Toplama (+)\n");
    printf("2. Çıkarma (-)\n");
    printf("3. Çarpma (*)\n");
    printf("4. Bölme (/)\n");
    printf("5. Çıkış\n");
    printf("=====================================\n");
    printf("Seçiminizi yapın: ");
}

double toplama(double a, double b) {
    return a + b;
}

double cikarma(double a, double b) {
    return a - b;
}

double carpma(double a, double b) {
    return a * b;
}

double bolme(double a, double b) {
    if (b == 0) {
        printf("Hata: Sıfıra bölme hatası!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int secim;
    double sayi1, sayi2, sonuc;
    
    printf("Merhaba! Ben Hamza'nın yazdığı basit calculator.\n");
    
    while (1) {
        printMenu();
        scanf("%d", &secim);
        
        if (secim == 5) {
            printf("\nCalculator kapatılıyor... Görüşürüz!\n");
            break;
        }
        
        if (secim >= 1 && secim <= 4) {
            printf("Birinci sayıyı girin: ");
            scanf("%lf", &sayi1);
            printf("İkinci sayıyı girin: ");
            scanf("%lf", &sayi2);
            
            switch (secim) {
                case 1:
                    sonuc = toplama(sayi1, sayi2);
                    printf("\nSonuç: %.2lf + %.2lf = %.2lf\n", sayi1, sayi2, sonuc);
                    break;
                case 2:
                    sonuc = cikarma(sayi1, sayi2);
                    printf("\nSonuç: %.2lf - %.2lf = %.2lf\n", sayi1, sayi2, sonuc);
                    break;
                case 3:
                    sonuc = carpma(sayi1, sayi2);
                    printf("\nSonuç: %.2lf * %.2lf = %.2lf\n", sayi1, sayi2, sonuc);
                    break;
                case 4:
                    if (sayi2 != 0) {
                        sonuc = bolme(sayi1, sayi2);
                        printf("\nSonuç: %.2lf / %.2lf = %.2lf\n", sayi1, sayi2, sonuc);
                    }
                    break;
            }
        } else {
            printf("\nGeçersiz seçim! Lütfen 1-5 arası bir sayı girin.\n");
        }
        
        printf("\nDevam etmek için Enter'a basın...");
        getchar(); // Buffer temizliği için
        getchar(); // Enter beklemek için
    }
    
    return 0;
}