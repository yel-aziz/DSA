#include <stdio.h>
#include <stdlib.h>

void insert(int numbtoadd, int *arr)
{
    int j;

    j = 0;
    while (arr[j])
    {
        j++;
    }
    arr[j] = numbtoadd;
    
}

int extract_min(int *arr)
{
    int i;
    int tmp;

    i = 0;
    tmp = arr[0];
    while (arr[i])
    {
        if(arr[i] < tmp)
        {
            tmp = arr[i];
        }
        i++;
    }
    return tmp;
}

int main(int ac, char **av)
{
    int i;
    int j;
    int *str;
    i = 1;
    while (av[i])
    {
        i++;
    }
    str = (int *)malloc(sizeof(int) * i);
    if(!str)
        return 0;
    i = 1;
    j = 0;
    while (av[i])
    {
        str[j++] = atoi(av[i++]);
    }
    insert(55,str);
    i = 0;
    while (i <= j)
    {
        printf("%d ",str[i++]);
    }
    printf("\nmin number is %d",extract_min(str));
    
    
    
}