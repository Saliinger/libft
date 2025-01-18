#include "libft.h"

char *ft_strndup(const char *s, size_t n)
{
    char *dup;
    size_t i;

    if (!s)
        return (NULL);
    
    // Allouer de la mémoire pour la nouvelle chaîne (+1 pour le caractère de fin de chaîne '\0')
    dup = (char *)malloc(sizeof(char) * (n + 1));
    if (!dup)
        return (NULL);

    // Copier jusqu'à n caractères ou jusqu'à la fin de la chaîne d'origine
    i = 0;
    while (i < n && s[i])
    {
        dup[i] = s[i];
        i++;
    }

    // Ajouter le caractère null à la fin de la chaîne dupliquée
    dup[i] = '\0';

    return (dup);
}
