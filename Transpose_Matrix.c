#include <stdio.h>

int main() {
    int original_matrix[2][3];
    int *a_ptr;
    a_ptr = original_matrix;
    
    printf("Enter values for 2x3 matrix: ");
    scanf("%d %d %d %d %d %d", a_ptr, a_ptr+1, a_ptr+2, a_ptr+3, a_ptr+4, a_ptr+5);
    
    printf("\nYour Matrix: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", original_matrix[i][j]);
        }
        printf("\n");
    }

    int transposed_matrix[3][2];
    
    printf("Transposed Matrix: \n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            transposed_matrix[i][j] = original_matrix[j][i];
            printf("%d ", transposed_matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
