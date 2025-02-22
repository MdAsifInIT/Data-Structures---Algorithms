#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *fp;
    char filename[100], word[100];
    char vowels[] = "aeiouAEIOU";
    int count = 0;

    printf("Enter the name of the file: \n");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("The file does not exist!\n");
        return 1;
    }

    while (fscanf(fp, "%99s", word) == 1)
    {
        int len = strlen(word);

        while (len > 0 && ispunct((unsigned char)word[len - 1]))
        {
            word[len - 1] = '\0';
            len--;
        }

        if (len > 0)
        {
            char letter = word[len - 1];

            if (strchr(vowels, letter) != NULL)
            {
                count++;
            }
        }
    }

    fclose(fp);
    printf("%d words end with vowels.\n", count);

    return 0;
}
