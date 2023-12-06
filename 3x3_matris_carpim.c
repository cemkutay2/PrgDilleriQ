// girilen iki matrisin carpimi (3x3)

#include <stdio.h>
// print_matrix function prototype
void print_matrix(int matrix[3][3]);

int main()
{
    int matrix[3][3];
    int matrix2[3][3];
    int matrix3[3][3];

    // matrix input loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("1) %d %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");

    // matrix2 input loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("2) %d %d: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // print out both matrices
    printf("\n");
    print_matrix(matrix);
    printf("\n");
    print_matrix(matrix2);
    printf("\n");

    // multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int result = 0;
            for (int k = 0; k < 3; k++)
            {
                result += matrix[i][k] * matrix2[k][j];
            }
            matrix3[i][j] = result;
        }
    }
    print_matrix(matrix3);

    return 0;
}

void print_matrix(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}