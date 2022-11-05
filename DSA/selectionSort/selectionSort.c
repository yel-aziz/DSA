#include "selectionSort.h"

int main()
{
    //a static array you can change it just keep the same lenght
    int arr[] = {2,6,5,-1,-100,9};
    int i;
    int j;
    int tmp;

    i = 0;
    j = 1;
    tmp = 0;

    while (i < 6)
    {
        j = i + 1;
        while(j < 6)
        {
            //here i check if the value of j index is smaller that value i index i swap 
            if(arr[j] < arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
            j++;
        }
       i++;
    }
    i = 0;
    printf("after : ");
    while (i < 6)
    {
        printf("%d ",arr[i++]);
    }
    
    
}