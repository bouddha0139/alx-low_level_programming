#include "main.h"

/**
 * _isalpha - vérifie si le caractère est alphabétique
 * @c: le caractère à vérifier
 *
 * Return: 1 si c est une lettre, sinon 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

