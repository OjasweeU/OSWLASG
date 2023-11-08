#include <stdio.h>

// Function to get the ASCII value of a character
int getASCIIValue(char character) 
{
    return (int)character;
}

int main() 
{
    printf("Name: OJASWEE UDGATA\n");
    printf("Regd No.: 2141021001\n");
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    int asciiValue = getASCIIValue(character);

    printf("ASCII value of '%c' is %d\n", character, asciiValue);

    return 0;
}
