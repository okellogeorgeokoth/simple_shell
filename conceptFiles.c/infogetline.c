 
#include <stdio.h>
#include <stdlib.h>

/**
* Here’s a typical getline() statement:
* getline(&buffer,&size,stdin);
* &buffer is the address of the first character position where the input string will be stored
* &size is the address of the variable that holds the size of the input buffer, another pointer
* stdin is the input file handle. 
*/

int input(char *s,int length);

int main()
{
    char *buffer;
    size_t bufsize = 32;
    size_t characters;

    buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }

    printf("Type something: ");
    characters = getline(&buffer,&bufsize,stdin);
    printf("%zu characters were read.\n",characters);
    printf("You typed: '%s'\n",buffer);

    return(0);
}