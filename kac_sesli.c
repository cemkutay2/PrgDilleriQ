// girilen stringde kaç sesli harf var (ing)

int SesliCount(char str[])
{
    const char sesli_harfler[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    int sesli_count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        for (int j = 0; j < 10; j++)
        {
            if (sesli_harfler[j] == str[i]) sesli_count++;
        }
    }
    return sesli_count;
}

int main()
{
    
    return 0;
}