#include<Stdio.h>
void main() 
{
    char ch;
    int lowercase_vowel,uppercase_vowel; 
    printf("enter the char ch");
    scanf(" %c",&ch);
    lowercase_vowel=(ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    uppercase_vowel=(ch == 'A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
    if(ch == lowercase_vowel || uppercase_vowel) 
    {
        printf("%c is vowel",ch);
    }
    else{
        printf("%c is consonat",ch);
    }









}