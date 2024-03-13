#include <stdio.h>
void bubble(int array[], int size)
// 3 1 4 2 5

{
    for (int step = 0; step < size - 1; step++)
    {
        for (int i = 0; i < size - step - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}
void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()

{

    int array[] = {3, 1, 4, 2, 5};
    int size = 5;
    bubble(array, size);
    printf("Print after sorted :\n");
    printarray(array, size);

    return 0;
}