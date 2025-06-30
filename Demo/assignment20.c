 #include<stdio.h>
 int main(){

    char ch;
    char v1 = 'a' ,  v2='e' , v3='i' , v4='o' ,v5= 'u';

    printf("Enter any lowercase character :");
    scanf("%c",&ch);

    if (ch== v1 || ch==v2 || ch==v3 || ch==v4 || ch==v5)
    {
        printf("%c is a vowel\n",ch);
    }
    else
    printf("%c is a consonant\n",ch);

    return 0;
    
       

 }