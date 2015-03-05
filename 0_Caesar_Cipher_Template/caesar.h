#ifndef CAESAR_H
#define CAESAR_H

/**
* Insert your function declarations here!
*/


/**
* Helper functions, Ignore these functions
*/

/**
*   Confirms the a character is valid and exits if not.
*/
void    caesar_confirmCharacter (char c);

/**
*   Calculates the proper mathematical remainder.
*/
int     caesar_properMod (int a, int m);

/**
*   Gets the numerical index of a character.
*/
int     caesar_getIndexFromCharacter(char c);

/**
*   Gets a character from a numerical index.
*/
char    caesar_getCharacterFromIndex(int index);

#endif
