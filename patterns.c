#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int prev = 0;
        int current = 1;
        for(int j = 1; j <= i; j++) {
            printf("%d ", current);
            int next = prev + current;
            prev = current;
            current = next;
        }
        printf("\n");
    }

    return 0;
}
