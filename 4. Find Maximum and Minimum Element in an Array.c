#include <stdio.h>

int main() {
    int p[100], q, r;
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &q);

    printf("Enter %d elements:\n", q);
    for(r = 0; r < q; r++) {
        scanf("%d", &p[r]);
    }

    max = p[0];
    min = p[0];

    for(r = 1; r < q; r++) {
        if(p[r] > max) {
            max = p[r];
        }
        if(p[r] < min) {
            min = p[r];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
