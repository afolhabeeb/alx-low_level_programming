#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

void before_main(void)__attribute__((constructor));

/**
 * before_main - function excutes print before the main function
 */


void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

