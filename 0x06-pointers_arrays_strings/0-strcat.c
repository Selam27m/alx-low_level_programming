#include <stdio.h>
#include "main.h"
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

