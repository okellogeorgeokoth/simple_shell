#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 * First task;code to pass  all Betty checks.
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;

    my_pid = getpid();
    printf("%u\n", my_pid);
    return (0);
}