#include <stdio.h>

// --- Function Prototypes (Modular Design) ---
void convertCtoF();
void convertCtoK();
void convertFtoC();
void convertFtoK();
void convertKtoC();
void convertKtoF();

int main() {
    int choice;

    // The Menu Loop
    do {
        printf("\n========================================\n");
        printf("   Unit-Aware Temperature Converter\n");
        printf("========================================\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Celsius to Kelvin\n");
        printf("3. Fahrenheit to Celsius\n");
        printf("4. Fahrenheit to Kelvin\n");
        printf("5. Kelvin to Celsius\n");
        printf("6. Kelvin to Fahrenheit\n");
        printf("7. Exit\n");
        printf("----------------------------------------\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: convertCtoF(); break;
            case 2: convertCtoK(); break;
            case 3: convertFtoC(); break;
            case 4: convertFtoK(); break;
            case 5: convertKtoC(); break;
            case 6: convertKtoF(); break;
            case 7: printf("Exiting program. Goodbye!\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}

// --- Function Definitions ---

void convertCtoF() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9.0 / 5.0) + 32;
    printf("Result: %.2f C = %.2f F\n", c, f);
}

void convertCtoK() {
    float c, k;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    k = c + 273.15;
    printf("Result: %.2f C = %.2f K\n", c, k);
}

void convertFtoC() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5.0 / 9.0;
    printf("Result: %.2f F = %.2f C\n", f, c);
}

void convertFtoK() {
    float f, k;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    k = (f - 32) * 5.0 / 9.0 + 273.15;
    printf("Result: %.2f F = %.2f K\n", f, k);
}

void convertKtoC() {
    float k, c;
    printf("Enter temperature in Kelvin: ");
    scanf("%f", &k);
    c = k - 273.15;
    printf("Result: %.2f K = %.2f C\n", k, c);
}

void convertKtoF() {
    float k, f;
    printf("Enter temperature in Kelvin: ");
    scanf("%f", &k);
    f = (k - 273.15) * 9.0 / 5.0 + 32;
    printf("Result: %.2f K = %.2f F\n", k, f);
}