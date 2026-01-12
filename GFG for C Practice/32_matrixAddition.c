//matrix addition
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter row and coloumn size:\n");
    scanf("%d %d",&x,&y);
    int arr1[x][y],arr2[x][y],sum[x][y];
    printf("Enter array element for 1st array:\n");
    for (int i = 0; i < x ; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("Enter array element for 2nd array:");
    for (int i = 0; i < x ; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    } 
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            sum[i][j] = arr1[i][j]+arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
        
    }
    
    

    return 0;
}