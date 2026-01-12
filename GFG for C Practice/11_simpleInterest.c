#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter principle amount:\n");
    scanf("%d",&p);
    printf("Enter rate of interst:\n");
    scanf("%d",&r);
    printf("Enter time:\n");
    scanf("%d",&t);
    printf("The interest will be:%d",(p*r*t)/100);
    
    return 0;
}