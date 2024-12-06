#include <stdio.h>
#include <string.h>

void print_array(int arry[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arry[i]);
    }
    printf("\n");
}

void bublesort(int arry[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i - 1); j++) {
            if (arry[j] > arry[j + 1]) {
                int a = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = a;
            }
        }
    }
}
  
int main(void) {
    int arry[10] = { 3,6,0,4,7,1,71,8,2,4 };
    print_array(arry, 10);
    bublesort(arry, 10);
    print_array(arry, 10);
}
