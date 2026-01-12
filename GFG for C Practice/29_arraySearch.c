//searching an element in an array
#include<stdio.h>
int main(){
    int arr[]={2,3,5,8,9,7,4,6,5};
    int size = 9;
    printf("Your array element is-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    int target;
    printf("\nEnter your target:\n");
    scanf("%d",&target);
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j <size ; j++)
        {
            if (arr[i]==arr[j])
            {
                printf("Array position is %d",j);
                break;
            }
            
        }
        
    }
    
    
    return 0;
}