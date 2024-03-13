#include <stdio.h>

void insertionsort(int b[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = b[step];
        int j = step - 1;
        while (j >= 0 && b[j] > key)
        {
            b[j + 1] = b[j];
            j--;
        }
        b[j + 1] = key;
    }
}
void printarray(int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
}
int main()

{

    int b[] = {3, 1, 5, 2, 4};
    int size = 5;
    insertionsort(b, size);
    printf("After insertionsort :\n");
    printarray(b, size);

    return 0;
}