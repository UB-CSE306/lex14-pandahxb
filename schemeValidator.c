#include "schemeValidator.h"

bool isAlpha(char c) {
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

bool isSpecial(char c) {
    return (c == '+' || c == '-' || c == '.');
}

bool isDigit(char c) {
    return ('0' <= c && c <= '9');
}

int schemeValidator(char scheme[]) {
    if (!isAlpha(scheme[0]))
        return -1;
    int result = 0; 
    for (int i = 1; scheme[i] != '\0'; i++) {
        if (!(isAlpha(scheme[i]) || isDigit(scheme[i]) || isSpecial(scheme[i]))) return -1;
        if ('A' <= scheme[i] && scheme[i] <= 'Z') result = 1;
    }
  return result;
}

