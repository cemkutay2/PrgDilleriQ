// girilen karakter sesli mi sessiz mi
// quiz sorusu

#include <stdio.h>
#include <stdbool.h>

void SesliKarakterBul(char input);

int main()
{
    char input;
    scanf("%c", &input);
    SesliKarakterBul(input);
    return 0;
}

void SesliKarakterBul(char input)
{
    bool sesli = false;
    const char sesli_harfler[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 10; i++)
    {
        if (sesli_harfler[i] == input)
        {
            printf("Sesli");
            sesli = true;
            break;
        }
    }
    if (!sesli)
        printf("Sessiz");
}