#include<stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{ 
    char str1[12] = "Hello world";
    char str3[12];
    char *ptr;


   /* copy str1 into str3 */
   ptr=strcpy(str3, str1);

   printf("%s\n", ptr );
   return 0;



}
