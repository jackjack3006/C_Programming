#include <stdio.h>
#include <string.h>

void character(char arr[], char ch);

int main()
{
    char ch, arr[100];

    printf("Enter the character that you want to check for occurences :\n");
    scanf("%c", &ch);

    printf("Enter the value of the string :\n");
    scanf("%s", arr);

    character(arr, ch);
}

void character(char arr[], char ch)
{
    for(int i = 0; i < strlen(arr); i++)
        if(arr[i] == ch) 
            printf("The character %c is present at %d in the string %s\n", ch, i, arr);
}