#include "main.h"

/**
 * print_last_digit - imprime le dernier chiffre d'un nombre
 * @n: l'entier dont on extrait le dernier chiffre
 *
 * Return: valeur du dernier chiffre
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
