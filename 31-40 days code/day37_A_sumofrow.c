//Q73:Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int i, j, rows, cols, mat[10][10], rowSum[10];
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
    
    for(i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for(j = 0; j < cols; j++)
            rowSum[i] += mat[i][j];
    }
    
    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++)
        printf("Row %d sum = %d\n", i+1, rowSum[i]);
    
    return 0;
}
