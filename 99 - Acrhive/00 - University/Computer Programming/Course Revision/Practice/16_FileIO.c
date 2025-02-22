#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char f[100], w[100];
    int c = 0;
    printf("Enter filename: ");
    scanf("%s", f);

    FILE *fp = fopen(f, "r");
    if (!fp)
        return printf("File not found!\n"), 1;

    while (fscanf(fp, "%99s", w) == 1)
    {
        int l = strlen(w) - 1;
        while (l >= 0 && ispunct(w[l]))
            l--;
        if (l >= 0 && strchr("aeiou", tolower(w[l])))
            c++;
    }

    fclose(fp);
    printf("%d words end with vowels.\n", c);
    return 0;
}