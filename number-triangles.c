#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%i ", i);
        int c = 1;
        int old = i;
        for(int j = 0; j < (i - 1); j++) {
            int num = old + (n - c);
            printf("%i ", num);
            old = num;
            c++;
        }
        printf("\n");
    }

    return 0;
}
