// sonsuz dongu ile 0-100 arası tek sayilari bul -CK

#include <stdio.h>

int main()
{
    int i = 0;
    while (1) // for ( ; ; )
    {
        if (i == 100)
            break;
        if (i % 2 != 0)
            printf("%d ", i);
        i++;
    }
    return 0;
}