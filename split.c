#include <stdlib.h>
#include <stdio.h>

int ft_countsplit(char s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(s[i])
    {
        while(s[i] && s[i] != c)
            i++;
        if( c == 0)
        {
            count++;
            break;
        }
        while(s && s[i] == c)
            i++;
        count++;
    }
    return(count);
}
int ft_wordlen(chars, char c)
{
    int i;
    i = 0;
    while(s && s[i] != c)
        i++;
    return(i);
}
char fill_string(chars, char c, char word)
{
    int i;
    int a;

    a = ft_wordlen(s,c);
    i = 0;
    word = malloc(sizeof(char) * (a + 1));
    *word[a] = 0;
    while(i < a)
        word[i++] =s++;
    while(s == c)
        s++;
    return(s);
}
static int free_s(char constres, int n)
{
    int i;
    i = 0;
    while (i < n)
    {
        free(res[i]);
        i++;
    } 
    free(res);
    return 0;
}
char ft_split(char const s, char c)
{
    int i;
    int count;
    char **res;

    count = ft_countsplit((char) s, c);
    res = malloc(sizeof(char ) (count + 1));
    res[count] = 0;
    i = 0;
    while(i < count)
    {
        s = fill_string((char *) s, c, (res + i));
        if(!s)
            free_s(res, count);
        i++;
    }
    return(res);
}
// int main()
// {
//     int i;
//     i = 0;
//     char s[]="111,222,333,444,,,";
//     char **res;
//     res = ft_split(s,',');
//     while(res[i])
//     {
//         printf("%s\n",res[i]);
//         i++;
//     }
//     return 0;
// }