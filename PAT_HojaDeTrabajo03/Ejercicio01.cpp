#include "Ejercicio01.h"

int Ejercicio01::findMin(int nums[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[right]) {
            // El mínimo está en la mitad derecha
            left = mid + 1;
        }
        else {
            // El mínimo está en la mitad izquierda o en la posición mid
            right = mid;
        }
    }

    return nums[left];
}
