#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
        int revar[12];


        for(i=0;i<n;i++)
         {
            revar[i]=a[n-i-1];

         }
        for(int i=0; i<n; i++)
        {
        a[i] = revar[i];
        }
        printf("Reversed array: ");
       for (int i = 0; i < n; i++)
        {
        printf("%d ", a[i]);
        }
       return 0;

}
