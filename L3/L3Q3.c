#include <stdio.h>

void displayAlphabets(char start, char end);

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    char startingAlphabet;
    
    printf("Enter the starting alphabet (a-z or A-Z): ");
    scanf(" %c", &startingAlphabet);

    if ((startingAlphabet >= 'a' && startingAlphabet <= 'z') || (startingAlphabet >= 'A' && startingAlphabet <= 'Z')) 
    {
        printf("Alphabets from %c to %c:\n", startingAlphabet, (startingAlphabet >= 'a' && startingAlphabet <= 'z') ? 'z' : 'Z');
        displayAlphabets(startingAlphabet, (startingAlphabet >= 'a' && startingAlphabet <= 'z') ? 'z' : 'Z');
    } 
    else 
    {
        printf("Invalid input. Please enter a valid starting alphabet (a-z or A-Z).\n");
    }

    return 0;
}

void displayAlphabets(char start, char end) 
{
    if (start <= end) 
    {
        printf("%c ", start);
        displayAlphabets(start + 1, end);
    }
}

