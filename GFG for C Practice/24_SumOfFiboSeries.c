#include<stdio.h>
int main(){
    int num,sum = 0;
    int a = 0 , b =1,c =0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    while (a <= num)
    {
        printf("%d ",a );
        sum = sum + a;
        c = a +b;
        a =b;
        b = c;
        
    }
    printf("\nSum is = %d",sum);
    

    return 0;
}