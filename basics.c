#include "basics.h"

#include <stdio.h>

void fizzbuzz(int n)
{
    for (int i = 1; i <= n; i += 1)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz\n");

        else if (i % 3 == 0)
            printf("Fizz\n");

        else if (i % 5 == 0)
            printf("Buzz\n");

        else
            printf("%d\n", i);
    }
}

size_t my_strlen(char *s)
{
    if (s == NULL)
        return 0;

    size_t l = 0;
    while (s[l] != '\0')
        l += 1;

    return l;
}

long binary_number(char s[])
{
    long n = 0;

    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] != '0' && s[i] != '1')
            return -1;

        n *= 2;
        n += (s[i] - '0');
        i += 1;
    }

    return n;
}

int hamming_distance(char *dna1, char *dna2)
{
    int i = 0;
    int diff = 0;

    while (dna1[i] != '\0' && dna2[i] != '\0')
    {
        if (dna1[i] != 'C' && dna1[i] != 'A' && dna1[i] != 'G'
            && dna1[i] != 'T')
            return -1;

        if (dna2[i] != 'C' && dna2[i] != 'A' && dna2[i] != 'G'
            && dna2[i] != 'T')
            return -1;

        if (dna1[i] != dna2[i])
            diff += 1;

        i += 1;
    }

    if (dna1[i] != '\0' || dna2[i] != '\0')
        return -1;

    return diff;
}

int is_isogram(char *s)
{
    int letters[26] = { 0 };

    int i = 0;
    while (s[i] != '\0')
    {
        int c = s[i];

        if (c >= 'a' && c <= 'z')
        {
            c -= 'a';
        }

        else if (c >= 'A' && c <= 'Z')
        {
            c -= 'A';
        }

        else
        {
            i += 1;
            continue;
        }

        if (letters[c] == 1)
            return 0;

        letters[c] = 1;
        i += 1;
    }

    return 1;
}

struct pair move_robot(struct pair current, char *directions)
{
    int i = 0;
    while (directions[i] != '\0')
    {
        switch (directions[i])
        {
        case 'U':
            current.y += 1;
            break;
        case 'R':
            current.x += 1;
            break;
        case 'D':
            current.y -= 1;
            break;
        case 'L':
            current.x -= 1;
            break;
        default:
            break;
        }

        i += 1;
    }

    return current;
}
