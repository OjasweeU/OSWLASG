#include <stdio.h>

void displayAlphabetsReverse(char start, char end);

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    char startingAlphabet;
    
    printf("Enter the starting alphabet (a-z or A-Z): ");
    scanf(" %c", &startingAlphabet);

    if ((startingAlphabet >= 'a' && startingAlphabet <= 'z') || (startingAlphabet >= 'A' && startingAlphabet <= 'Z')) 
    {
        printf("Alphabets from %c to %c in reverse order:\n", startingAlphabet, (startingAlphabet >= 'a' && startingAlphabet <= 'z') ? 'a' : 'A');
        displayAlphabetsReverse(startingAlphabet, (startingAlphabet >= 'a' && startingAlphabet <= 'z') ? 'a' : 'A');
    } 
    else 
    {
        printf("Invalid input. Please enter a valid starting alphabet (a-z or A-Z).\n");
    }

    return 0;
}

void displayAlphabetsReverse(char start, char end) 
{
    if (start >= end) 
    {
        printf("%c ", start);
        displayAlphabetsReverse(start - 1, end);
    }
}

