#include<stdio.h>
#include<string.h>
int main()
{




char s1[20]="hello ";
char s2[]="world\n";
char *ptr;
ptr=strcat(s1,s2,1);
printf("%s\n",ptr);
return 0;


}
