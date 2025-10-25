#include <stdio.h>

int main() {
    int p[100], q, r;

    printf("Enter number of elements: ");
    scanf("%d", &q);

    printf("Enter %d elements:\n", q);
    for(r = 0; r < q; r++) {
        scanf("%d", &p[r]);
    }

    printf("You entered:\n");
    for(r = 0; r < q; r++) {
        printf("%d ", p[r]);
    }

    return 0;
}
