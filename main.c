#include <stdio.h>
#include <string.h>

int knuth(char * string, char * pattern)
{
    char *p1 = string;
    char *p2 = pattern;
    char *p3;
    int i = 0;
    int j = 0;
    if(p1 == NULL || p2 == NULL || strlen(pattern) == 0 || strlen(string) == 0) return -1;
    for(i = 0; i<strlen(string); i++)
    {
        if(*p1 == *p2)
        {
            p3 = p1;
            for(j = 0;j<strlen(pattern);j++)
            {
                if(*p3 == *p2)
                {
                    p3++;p2++;
                }
                else
                    break;
            }
            p2 = pattern;
            if(j == strlen(pattern))
            {

                return i;
            }
        }
        p1++;
    }
    return i;
}

int main() {
    char string[] = "aasd";
    char pattern[] = "asd";
    int n = knuth(string, pattern);
    printf("%d", n);

    return 0;
}
