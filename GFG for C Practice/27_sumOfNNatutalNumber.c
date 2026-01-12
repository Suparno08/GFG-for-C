#include<stdio.h>
int sum(int a){
    if (a<=1)
    {
        return a ;
    }
    return a + sum(a-1);
}
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("Sum = %d ", sum(num));
    


    return 0;
}