#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Taille d'un int : %zu octets\n", sizeof(int));
    printf("Taille d'un float : %zu octets\n", sizeof(float));
    printf("Taille d'un double : %zu octets\n", sizeof(double));
    printf("Taille d'un char : %zu octets\n", sizeof(char));
    printf("Taille d'un short : %zu octets\n", sizeof(short));
    printf("Taille d'un long : %zu octets\n", sizeof(long));
    printf("Taille d'un long long : %zu octets\n", sizeof(long long));

    return (0);
}
