#include <stdlib.h>
#include <stdio.h>

int sum(int tab[], int size);
int main(void)
{
    int len, i;
    printf("The size of array : ");
    scanf("%d", &len);
    int array[len];
    for(i = 0 ; i < len ; i++)
    {
        scanf("%d", &array[i]);
    }
    int elements_sum = sum(array, len);
    printf("%d", elements_sum);

    return 0;
}
int sum(int tab[], int size)
{
    int j, elements_sum = 0;
    for(j = 0 ; j < size ; j++)
    {
        elements_sum+=tab[j];
    }
    return elements_sum;
}
