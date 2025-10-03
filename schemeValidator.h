#ifndef SCHEME_VALIDATOR_H
#define SCHEME_VALIDATOR_H

#include <stdbool.h>

/*
 * URL scheme validation
 * https://tools.ietf.org/html/rfc3986#section-3.1
 *
 *
 *  +1 indicates valid scheme with presence of both UC and LC
 *   0 indicates valid scheme with only LC present
 *  -1 indicates ill-formed scheme
 */
int schemeValidator(char scheme[]);

// c is an alphabetic character
bool isAlpha(char c);

// c is a digit character
bool isDigit(char c);

// c is a special character, +, -, or .
bool isSpecial(char c);

#endif
