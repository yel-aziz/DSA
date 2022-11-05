#include "quickSort.h"

int main()
{
    //astatic array
    int arr[] = {2,5,10,654,9};
    int i = 0;
    int j = 0;
    int tmp;
    //implementation of the privot point
        while (j < 4)
        {
            if(arr[j] < arr[4])
            {
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
                i++;
            
            }
            j++;
        }
    //swapin the last element with arr[i]
    tmp = arr[4];
    arr[4] = arr[i];
    arr[i] = tmp;
    i = 0;
    //printting of the array
    while(i < 5)
    {
        printf("%d ",arr[i++]);
    }
    
}