/*Write a Program to take the value from the user as input any alphabet and check whether it is vowel or consonant (Using the switch statement).*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet: ");

    /* Input an alphabet from user */
    scanf("%c", &ch);

    // Switch value of ch
    switch (ch)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    case 'A':
        printf("Vowel");
        break;
    case 'E':
        printf("Vowel");
        break;
    case 'I':
        printf("Vowel");
        break;
    case 'O':
        printf("Vowel");
        break;
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
    }

    return 0;
}