#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *			and exits with status 98 if malloc fails
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b) {
    void *ptr = malloc(b); // allocate memory using malloc

    if (ptr == NULL) {
        perror("Error: malloc failed"); // print an error message
        exit(98); // terminate the process with status value 98
    }

    return ptr; // return the allocated memory
}
