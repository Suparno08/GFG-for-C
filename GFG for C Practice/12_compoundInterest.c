#include<stdio.h>
#include<math.h>
int main(){
    int p,r,t;
    printf("Enter principle amount:\n");
    scanf("%d",&p);
    printf("Enter rate of interst:\n");
    scanf("%d",&r);
    printf("Enter time:\n");
    scanf("%d",&t);
    float compoundInterest=p*pow((1+(r/100.0)),t);
    printf("Compound interest is:%.2f\n",compoundInterest);
    return 0;
}