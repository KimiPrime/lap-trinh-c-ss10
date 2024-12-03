#include <stdio.h>

int main() {
    int n, m;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    int arr[n][m];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            int key = arr[i][j];
            int k = j - 1;

            while (k >= 0 && arr[i][k] > key) {
                arr[i][k + 1] = arr[i][k];
                k--;
            }
            arr[i][k + 1] = key;
        }
    }

    printf("Ma tran sau khi sap xep theo dong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
