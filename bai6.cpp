#include <stdio.h>

int main() {
    int arr[5] = {2, 3, 1, 5, 6};
    int n = 5, i, target, count = 0;
    int positions[n];

    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            positions[count] = i;
            count++;
        }
    }

    if (count > 0) {
        printf("Phan tu %d duoc tim thay tai cac vi tri: ", target);
        for (i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", target);
    }

    return 0;
}
