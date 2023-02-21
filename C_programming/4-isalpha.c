#include "main.h"
#include <stdio.h>
/**
 *
 * Write a function that checks for alphabetic character.Write a function that checks for alphabetic character.
 *
 * Prototype: int _isalpha(int c);
 *
 * Returns 1 if c is a letter, lowercase or uppercase
 *
 * Returns 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >='a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}

