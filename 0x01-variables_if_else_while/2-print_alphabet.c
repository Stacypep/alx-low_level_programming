#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Description
 *
 * Return: 0 (Sucess)
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n < 0)
