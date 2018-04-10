#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int chiefHopper(int arr_size, int* arr) {
    for (int i = 0; i < arr_size; i++) {
        scanf("%i", arr);
    }
    int result = 0;
    for (int i = arr_size - 1; i >= 0; i--) {
        result = (result + arr[i] + 1) / 2;
    }
    return result;
}

int main() {
    int n;
    scanf("%i", &n);
    int* arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    int result = chiefHopper(n, arr);
    printf("%d\n", result);
    return 0;
}
