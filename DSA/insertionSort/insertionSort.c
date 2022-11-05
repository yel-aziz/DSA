#include "insertionSort.h"

int main(int ac, char **av)
{
    int *arr;
    int i;
    int j;
    int k;
    int tmp;

    i = 1;
    j = 0;
    tmp = 0;
    //parameters check if you don't enter enough arguments it will throw a message
    if(ac == 1)
    {
        printf("please enter your digits to sort");
        return 0;
    }
    //calculate the lenght of the array and allocation
    while(av[i])
    {
        i++;
    }
    arr = (int *)malloc(sizeof(int) * i);
    if(!arr)
        return 0;
    i = 1;
    //converting the arguments from char to in using atoi
    while (av[i])
    {
        arr[j++] = atoi(av[i++]);
    }
    i = 0;
    k = 0;
    //implementation of the give algorithme
    while(i < j - 1)
    {
        k = i;
        while(k < j - 1)
        {
            if(arr[k] < arr[k + 1])
            {
                tmp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = tmp;
            }
            k++;
        }
        i++;
    }
    i = 0;
    while (i < j)
    {
        printf("%d ",arr[i++]);
    }
    
    
}