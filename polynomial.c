#include <stdio.h>

#define MAX_TERMS 100

struct Term {
    int coefficient;
    int power;
};

void inputPolynomial(struct Term polynomial[], int *size);
void printPolynomial(struct Term polynomial[], int size);
void addPolynomials(struct Term polynomial1[], int size1, struct Term polynomial2[], int size2, struct Term result[], int *size);

int main() {
    struct Term polynomial1[MAX_TERMS], polynomial2[MAX_TERMS], sum[MAX_TERMS];
    int size1, size2, sumSize;

    printf("Enter the first polynomial:\n");
    inputPolynomial(polynomial1, &size1);

    printf("\nEnter the second polynomial:\n");
    inputPolynomial(polynomial2, &size2);

    addPolynomials(polynomial1, size1, polynomial2, size2, sum, &sumSize);

    printf("\nSum of the polynomials:\n");
    printPolynomial(sum, sumSize);

    return 0;
}

void inputPolynomial(struct Term polynomial[], int *size) {
	int i;
    printf("Enter the number of terms: ");
    scanf("%d", size);

    printf("Enter the coefficients and powers:\n");
    for (i = 0; i < *size; i++) {
        printf("Coefficient of term %d: ", i + 1);
        scanf("%d", &polynomial[i].coefficient);
        printf("Power of term %d: ", i + 1);
        scanf("%d", &polynomial[i].power);
    }
}

void printPolynomial(struct Term polynomial[], int size) {
	int i;
    for (i = 0; i < size; i++) {
        printf("%dx^%d ", polynomial[i].coefficient, polynomial[i].power);
        if (i != size - 1) {
            printf("+ ");
        }
    }
    printf("\n");
}

void addPolynomials(struct Term polynomial1[], int size1, struct Term polynomial2[], int size2, struct Term result[], int *size) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (polynomial1[i].power > polynomial2[j].power) {
            result[k] = polynomial1[i];
            i++;
        } else if (polynomial1[i].power < polynomial2[j].power) {
            result[k] = polynomial2[j];
            j++;
        } else {
            result[k].coefficient = polynomial1[i].coefficient + polynomial2[j].coefficient;
            result[k].power = polynomial1[i].power;
            i++;
            j++;
        }
        k++;
    }

    while (i < size1) {
        result[k] = polynomial1[i];
        i++;
        k++;
    }

    while (j < size2) {
        result[k] = polynomial2[j];
        j++;
        k++;
    }

    *size = k;
}

