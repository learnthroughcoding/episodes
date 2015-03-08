#ifndef CAESAR_H
#define CAESAR_H

/**
*   Reads every character in the text and rotates it by the offset.
*/
void    caesar_encipher (char* dst, char* text, int length, int offset);

/**
*   Reads every character in the text and rotates it by the negative offset.
*/
void    caesar_decipher (char* dst, char* text, int length, int offset);

/**
*   Confirms and rotates a single character by the offset.
*/
char    caesar_rotate (char c, int offset);


/**
*   Helper functions, Ignore these functions
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
