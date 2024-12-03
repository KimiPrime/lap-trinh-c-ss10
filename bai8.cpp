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

    for (int j = 0; j < m; j++) {
        for (int i = 1; i < n; i++) {
            int key = arr[i][j];
            int k = i - 1;

            while (k >= 0 && arr[k][j] > key) {
                arr[k + 1][j] = arr[k][j];
                k--;
            }
            arr[k + 1][j] = key;
        }
    }

    printf("Ma tran sau khi sap xep theo cot:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
