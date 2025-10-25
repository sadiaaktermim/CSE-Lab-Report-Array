#include <stdio.h>

int main() {
    int p[100], q, r, s, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &q);

    printf("Enter %d elements:\n", q);
    for(r = 0; r < q; r++) {
        scanf("%d", &p[r]);
    }

    printf("Enter element to search: ");
    scanf("%d", &s);

    for(r = 0; r < q; r++) {
        if(p[r] == s) {
            printf("Element found at position %d\n", r + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
