#include <stdio.h>

int main() {
    int p[100], q, r, s = 0;

    printf("Enter number of elements: ");
    scanf("%d", &q);

    printf("Enter %d elements:", q);
    for(r = 0; r < q; r++) {
        scanf("%d", &p[r]);
    }

    for(r = 0; r < q; r++) {
        s = s + p[r];
    }

    printf("Sum of all elements = %d\n", s);

    return 0;
}
