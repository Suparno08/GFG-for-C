// sorting an array in decending order
#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter array size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}