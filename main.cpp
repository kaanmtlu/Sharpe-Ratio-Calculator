#include <stdio.h>

int main() {
    double yatirimGetirisi, risksizFaiz, standartSapma, sharpeOrani;

    printf("Sharpe Orani Hesaplama Programina Hosgeldiniz!\n\n");

    printf("Yatirim getirisi (%% olarak): ");
    scanf("%lf", &yatirimGetirisi);

    printf("Risksiz faiz orani (%% olarak): ");
    scanf("%lf", &risksizFaiz);

    printf("Portfoyun standart sapmasi (%% olarak): ");
    scanf("%lf", &standartSapma);

    // Sharpe oranı formülü
    sharpeOrani = (yatirimGetirisi - risksizFaiz) / standartSapma;

    printf("\nSharpe Orani = (%.2f - %.2f) / %.2f = %.2f\n",
           yatirimGetirisi, risksizFaiz, standartSapma, sharpeOrani);

    // Sonuç yorumu
    if (sharpeOrani < 1)
        printf("Bu oran dusuk, risk getiriyi karsilamiyor olabilir.\n");
    else if (sharpeOrani >= 1 && sharpeOrani < 2)
        printf("Sharpe orani iyi bir seviyede.\n");
    else if (sharpeOrani >= 2 && sharpeOrani < 3)
        printf("Sharpe orani cok iyi bir seviyede.\n");
    else if (sharpeOrani >= 3)
        printf("Sharpe orani mukemmel bir seviyede!\n");

    return 0;
}
