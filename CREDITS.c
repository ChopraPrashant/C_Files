#include <stdio.h>

int main(void) {
    int T,X;
    printf("Enter the number of Test Cases T ");
    scanf("%d",&T);
    if((T<1)||(T>100))
    {
        printf("Enter value of T between 1 and 100");
        return 0;
    }
    int arr[T];
    for(int i=0;i<T;i++)
    {
        printf("Enter the credit %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<T;i++)
    {
        if(arr[i]>65)
        {
            printf("\nOVERLOAD");
        }
        else if(arr[i]<35)
        {
            printf("\nUNDERLOAD");
        }
        else
        {
            printf("\nNORMAL");
        }
        
    }
	return 0;
}

