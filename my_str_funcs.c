#include <stdio.h>
#include <string.h>

int my_strlen(char *str)
{
    int i = 0;
    while (*(str++) != '\0')
        i++;
    return i;
}

int my_strnlen(char *str, int len)
{
    int i = 0;
    while (*(str++) != '\0' && i < len)
        i++;
    return i;
}

int my_strcmp(char *str1, char *str2)
{
    while ((*str1 && *str2) && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    if (*str1 - *str2 == 0) return 0;
    return *str1 > *str2 ? 1 : -1;
}

int my_strncmp(char *str1, char *str2, int len)
{
    int i = 0;
    while ((*str1 && *str2) && (*str1 == *str2) && (i < len - 1))
    {
        str1++;
        str2++;
        i++;
    }
    if (*str1 - *str2 == 0) return 0;
    return *str1 > *str2 ? 1 : -1;
}

char *my_strcat(char *str1, char *str2)
{
    char *return_address = str1;
    while (*(str1) != '\0') // while (*(++str1));
        str1++;
    while (*(str2) != '\0') // while (*(str1++) = *(str2++));
        *(str1++) = *(str2++);
    str1 = return_address;
    return str1;
}

char *my_strncat(char *str1, char *str2, int len)
{
    char *return_address = str1;
    while (*(str1) != '\0') // while (*(++str1));
        str1++;
    for (int i = 0; (i < len) && (*(str2 + i) != '\0'); i++)
        *(str1 + i) = *(str2 + i);
    str1 = return_address;
    return str1;
}

char *my_strcpy(char *str1, char *str2)
{
    char *return_address = str1;
    while (*(str2) != '\0') // while (*(str1++) = *(str2++));
        *(str1++) = *(str2++);
    str1 = return_address;
    return str1;
}

char *my_strncpy(char *str1, char *str2, int len)
{
    char *return_address = str1;
    for (int i = 0; (i < len) && (*(str2 + i) != '\0'); i++)
        *(str1++) = *(str2++);
    str1 = return_address;
    return str1;
}

char *my_strchr(char *str, int chr)
{
    while (*(str++))
        if (*str == chr)
            return str;
    return 0;
}

char *my_strrchr(char *str, int chr)
{
    for (int i = my_strlen(str) - 1; i >= 0; i--)
        if (*(str + i) == chr)
            return str + i;
    return 0;
}

char *my_strstr(char *str, char *srch_term)
{
    char *temp;
    int flag, i = 0;
    while (*(str + i))
    {
        if (*(str + i) == *srch_term)
        {
            flag = 0;
            int j = 0;
            while (*(srch_term + j) && *(str + i + j))
            {
                if (*(srch_term + j) != *(str + i + j))
                {
                    flag = 1;
                    break;
                }
                j++;
            }
            if (!flag)
            {
                temp = (str + i);
                break;
            }
        }
        i++;
    }
    return temp;
}

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    printf("%d", my_strncmp("hellos", "hello", 6));
    return 0;
}