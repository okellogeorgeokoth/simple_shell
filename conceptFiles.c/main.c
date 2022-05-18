#include <stdio.h>
/**
 * prototypes in  main : int main(void);
 *                       int main(int ac, char **av);
 *                       int main(int ac, char **av, char **env);
 * in main the env is a NULL terminated array of strings.
 *
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
    unsigned int i;

    i = 0;
    while (env[i] != NULL)
    {
        printf("%s\n", env[i]);
        i++;
    }
    return (0);
}