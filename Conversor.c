#include <stdio.h>

int main() {
    int option;
    double amount, converted;
    
    printf("Bienvenido al conversor de monedas!\n");
    printf("Seleccione una opción:\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Dólares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dólares\n");
    printf("Seleccione una opción (1-6): ");
    scanf("%d", &option);
    
    if(option < 1 || option > 6) {
        printf("Opción inválida.\n");
        return 1;
    }

    printf("Ingrese la cantidad a convertir: ");
    scanf("%lf", &amount);
    
    switch(option) {
        case 1:
            converted = amount * 0.13; // 1 Quetzal ≈ 0.13 USD
            printf("%.2lf Quetzales son %.2lf Dólares\n", amount, converted);
            break;
        case 2:
            converted = amount * 0.12; // 1 Quetzal ≈ 0.12 Euros
            printf("%.2lf Quetzales son %.2lf Euros\n", amount, converted);
            break;
        case 3:
            converted = amount * 7.8; // 1 USD ≈ 7.8 Quetzales
            printf("%.2lf Dólares son %.2lf Quetzales\n", amount, converted);
            break;
        case 4:
            converted = amount * 0.92; // 1 USD ≈ 0.92 Euros
            printf("%.2lf Dólares son %.2lf Euros\n", amount, converted);
            break;
        case 5:
            converted = amount * 8.5; // 1 Euro ≈ 8.5 Quetzales
            printf("%.2lf Euros son %.2lf Quetzales\n", amount, converted);
            break;
        case 6:
            converted = amount * 1.09; // 1 Euro ≈ 1.09 USD
            printf("%.2lf Euros son %.2lf Dólares\n", amount, converted);
            break;
    }

    printf("Gracias por usar el conversor de monedas!\n");
    return 0;
}