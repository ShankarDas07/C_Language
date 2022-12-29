#include<stdio.h>
#include<string.h>
void chekChar(char str[],char ch);
int main()
{
    char str[] = "ICVP College";
    char ch = 'e';
    chekChar(str,ch);
    return 0;
}


void chekChar(char str[],char ch)
{
    for(int i=0; str[i] !='\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("character is present :");
            return ;
        }
    }
    printf("character is not present :");
}