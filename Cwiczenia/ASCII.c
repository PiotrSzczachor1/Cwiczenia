#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0; i<256; i++)
    {
        printf("%d %c\n", i, (unsigned char)i);
    }

    return 0;
}
