// kelimedeki sessiz harf oranı
// quiz sorusu

#include <stdio.h>

void SesliOran(char str[])
{
    const char sesli_harfler[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    int strlen = 0, sesli_count = 0;
    while(str[strlen] != '\0')
    {
        for (int i = 0; i < sizeof(sesli_harfler) - 1; i++)
        {
            if (sesli_harfler[i] == str[strlen]) sesli_count++;
        }
        strlen++;
    }
    float sessiz_oran = (strlen - sesli_count) / (float)strlen * 100;
    printf("%f", sessiz_oran);
}

int main()
{
    SesliOran("aeff");
    return 0;
}