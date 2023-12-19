// girilen 2 stringin uzunluğunu döndüren fonksiyon
// quiz sorusu
#include <stdio.h>

int StrlenToplam(char str1[], char str2[])
{
    int str1len = 0, str2len = 0;

    while (str1[str1len] != '\0') str1len++;
    while (str2[str2len] != '\0') str2len++;

    return str1len + str2len;
}

int main()
{
    printf("%d", StrlenToplam("123", "1234"));
    return 0;
}