/*
    Character function that returns a string of random characters.
    Its parameter is the size of the string to be generated.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_string(char *str, size_t size) {
    // set of characters to choose from
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // loop through each character position
    for (size_t i = 0; i < size; i++) {
        // generate random index in charset
        int key = rand() % (sizeof(charset) - 1);
        // store character at index 'key' in string position 'i'
        str[i] = charset[key];
    }

    // Null-terminate the string
    str[size] = '\0';
}