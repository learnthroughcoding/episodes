#include <stdio.h>
#include <stdlib.h>
#include "caesar.h"



/**
*   Insert your function definitions here!
*/



/**
*   Helper functions, Ignore these functions
*/

/**
*   Confirms the a character is valid and exits if not.
*/
void caesar_confirmCharacter(char c)
{
    if(c < 'A' || c > 'Z')
    {
        printf("Error: Character %c is not between A and Z.\n", c);
        exit(-1);
    }
}

/**
*   Calculates the proper mathematical remainder.
*/
int caesar_properMod (int a, int m)
{
    return (a < 0) ? caesar_properMod(a + m, m) : a % m;
}

/**
*   Gets the numerical index of a character.
*/
int caesar_getIndexFromCharacter(char c)
{
    return c - 'A';
}

/**
*   Gets a character from a numerical index.
*/
char caesar_getCharacterFromIndex(int index)
{
    return index + 'A';
}
