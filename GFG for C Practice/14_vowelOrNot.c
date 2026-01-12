#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character\n");
    scanf(" %c",&ch);
    if ((ch =='A')||(ch =='E')||(ch =='I')||(ch =='O')||(ch =='U'))
    {
        printf("You entered vowel");
    }
    else if ((ch =='a')||(ch =='e')||(ch =='i')||(ch =='o')||(ch =='u'))
    {
        printf("You entered vowel");
    }
    else
    {
        printf("You entered consonant");
    }
    
    
    
    return 0;
}