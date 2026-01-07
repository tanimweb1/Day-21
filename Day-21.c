#include<stdio.h>
 int main(){


    // max & min in array

    int numbers[] = {23, 45, 65, 75, 43, 56, 354, 645, 56, 43};

    int max = numbers[0];
    int min = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
        }
        if (min > numbers)
        {
            min = numbers[i];
        }
    }

    printf("Max is %d\n", max);
    printf("Min is %d\n", min);



    return 0;

 }


