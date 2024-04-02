#ifndef BASICS_H
#define BASICS_H

#include <stdlib.h>

// TODO: Create a structure for the pair
struct pair
{
    int x;
    int y;
};

void fizzbuzz(int n);
size_t my_strlen(char *s);
long binary_number(char str[]);
int hamming_distance(char *dna1, char *dna2);
int is_isogram(char *s);
struct pair move_robot(struct pair current, char *directions);

#endif /* !BASICS_H */
