#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate(int length, char *string)
{
char save;

save = *string;
while(--length)
{
*string=*(string+1);
++string;
}
*string = save;
}

void permute(int length, char *string, int depth)
{

if (length == 0)
printf("%s\n",string-depth);
else
{
int count;

for(count = length ; count>=0; --count)
{
permute(length-1,string+1,depth+1);
rotate(length,string);
}
}

}


int main()
{
int argc=2 ;
char *temp="hello hi";
char **argv= &temp;
while (--argc)
{
char *source = (char*)malloc(strlen(*++argv)+1);

if (source)
{
strcpy(source,*argv);
printf("\nPermuting \"%s\"\n",source);

permute(strlen(source),source,0);


free(source);
}
}
return EXIT_SUCCESS;
}

