#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter the values");
    scanf("%c",&ch);
    if(isalpha(ch)==0)
    {
        printf("not a alaphet");
    }
        else
        {
        printf("alaphet");
        }
        getch();
}
