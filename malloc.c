#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (void)
{
    char *s = "hi!";
    char *t = malloc(strlen(s)+1);
/* this copys the string to another string but we already have strcpy for that
 strcpy(t,s)
 does the same
 */
  
    for (int i = 0; i < strlen(s)+1; i++)
    {
        t[i] = s[i];

    }
//null represents the first memory address and one shouldn't use it
    if (t == NULL){
        return 1;
    }

    if (strlen(s) > 0){
        t[0]=toupper(t[0]);
    }

    printf("s: %s\n",s);
    printf("t: %s\n",t);

    free(t);
    return 0;
}
