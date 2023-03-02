#include "main.h"

/**
 * _strcmp- compare two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: int 0 for equal, -1 for s1 < s2, 1 for s1 > s2.
 */

int _strcmp(char *s1, char *s2)
{
    int count1, count2, count;

    for (count = 0; s1count1 )