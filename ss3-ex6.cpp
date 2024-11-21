#include <stdio.h> 

int main() {
    double canhday, chieucao, dientich;
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%lf", &canhday); 
    printf("Nhap do dai chieu cao cua tam giac: ");
    scanf("%lf", &chieucao); 
    dientich = 0.5 * canhday * chieucao;
    printf("Dien tich tam giac la: %.2lf\n", dientich);

    return 0; 
}
