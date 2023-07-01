#include "libft.h"

static int find_array_size(char const *s, char *c)
{
    if (!c || !c[0])
        return (0);
    int i;
    int j;
    int trig;
    char *x;

    i = 0;
    j = 0;
    trig = 1;
    while (s[i])
    {
        if (s[i] != c[0] && trig)
        {
            j++;
            trig = 0;
        }
        else if (s[i] == c[0] && !trig)
        {
            trig = 1;
        }
        i++;
    }
    return (j);
}

static char *set_str(char c)
{
    char *x;

    x = malloc(sizeof(char) * 2);
    if (!x)
        return (NULL);
    x[0] = c;
    x[1] = '\0';
    return (x);
}

void allocate_str(char *s1, char **split, char *ch)
{

    int i;
    int j;
    int k;
    i = 0;
    j = 0;
    k = 0;
    while (s1[i])
    {
        j = i;
        while (s1[j] && s1[j] != ch[0])
            j++;
        split[k] = (char *)malloc(sizeof(char) * (j - i + 1));
       // printf("i = %d  j = %d\n",i, j);
        split[k] = ft_substr(s1, i, (j - i));
        k++;
        i = j;
        while (s1[j] && s1[i] == ch[0])
            i++;
    }
    return;
}

char **ft_split(char const *s, char c)
{
    if (!s || !s[0])
        return (NULL);
    char *ch;
    int size;
    char *s1;
    char **split;

    ch = set_str(c);
    s1 = ft_strtrim(s, ch);
    size = find_array_size(s1, ch);
    split = (char **)malloc(sizeof(char *) * (size + 1));
    if (!split)
        return (NULL);
    allocate_str(s1, split, ch);
    return split;
}

int main()
{
    char **s = ft_split("ahmet   faruk   yarikbas    ", ' ');
    int i = 0;

    while (s[i])
    {
        printf("%d = %s/\n",i, s[i]);
        i++;
    }
}