#include "main.h" 
/**
 * _strcat connecatination two strings
 * @dest:Apointer to a character that will be change
 * @src A pointer to a character that will also be changed
 * Return:dest
 */
char *_strcat(char *dest, char *src);
{
int i,j;
i=0;
while (dest[i]!='\0')
{
i++;
}
j=0;
while (src[j]!='\0')
{
desc[i]=src[j];
j++;
i++;
}
dest[i]='\0';
return(dest);
}

