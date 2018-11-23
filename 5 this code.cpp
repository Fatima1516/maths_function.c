//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// end of file
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#include<stdio.h>

int main()
{
    char ch;
    
    printf("Enter a character\n");
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    printf("%c is a vowel.\n",ch);
    else
    printf("%is not a vowel.\n",ch);
    getchar();
    getchar();
    return 0;
}

