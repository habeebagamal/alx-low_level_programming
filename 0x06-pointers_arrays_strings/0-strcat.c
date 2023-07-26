#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main (void)
{
char s1[20]="hello";
char s2[]="world\n";
char *ptr;
ptr=strcat(s1, s2);
printf("%s\n",ptr);
return 0;
}
