/*
*  Selection Sort in C
 */

#include<stdio.h>
#include<stdlib.h> //header file for calloc function
int main()
{
    int *arr;  //Pointer variable for the array.
    int size;  //Size of the array block.
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d",&size);
    int temp=0;
    arr=(int*)calloc(size,sizeof(int));

    //Allocates as many as size number of blocks and returns the base address.
    //If space is insufficient, allocation fails and returns a NULL pointer.
    if(arr==NULL)
    {
        printf("SPACE COULD NOT BE ALLOCATED\n");
        return 1;//abnormal termination is specified
    }
    while(temp<size)
    {
        printf("arr[%d]= \t ",temp);
        scanf("%d",&arr[temp]);
        printf("\n");
        temp++;
    }
    printf("\n");

    //Printing the array before storing of the array.
    printf("BEFORE SORTING\n");
    temp=0;
    while(temp<size)
    {
        printf("arr[%d]=%d\n",temp,arr[temp]);
        temp++;
    }
    printf("\n");
    for(int i=0;i<size-1;i++)
    {
        int min=i;  //Temporarily assigning minimum number's value index with i

        //Loop to find smallest number from i+1-->end of the array.
        for(int j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }

        //if i th element is smallest element, then no swapping will be done.
        if(min!=i)
        {
            //Swapping arr[min] with arr[i].
            int smallest=arr[min];
            arr[min]=arr[i];
            arr[i]=smallest;
        }
    }
    printf("AFTER SORTING\n");
    temp=0;
    while(temp<size)
    {
        printf("arr[%d]=%d\n",temp,arr[temp]);
        temp++;
    }
    free(arr);  //frees the memory chunk created for storing the array.
    return 0;
}
