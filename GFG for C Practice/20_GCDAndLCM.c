#include<stdio.h>
int gcd(int x, int y){
    if (y==0)
    {
        return x;

    }
    return gcd(y,x%y);
    
}
int main(){
    int a , b;                             
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("GCD is %d\n",gcd(a,b));
    int lcm = (a * b)/gcd(a,b);
    printf("LCM is %d\n",lcm);


    return 0;
}