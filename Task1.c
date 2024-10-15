/*
#define ROW 9
#define COL 9
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
    int row, col;
    printf("\n");
    for (row = 1; row <= ROW; ++row)
    {
        for (col = 1; col <= COL; col++)
        {
            if (col <= row)
            {
                printf("%5d", row * col);
            }
            else {
                printf("    ");
            }

        }
        printf("\n");
    }
    return 0;
}
*/

// вариант 17

#define ROW 9
#define COL 9
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{


    int row, col;

    printf("\n");
    for (row = 1; row <= ROW; ++row)
    {
        for (col = 1; col <= COL; col++)
            printf("%5d%s%d%s%3d", col, " x ", row, " = ", col * row);
        printf("\n");

    }

    system("pause");
}











