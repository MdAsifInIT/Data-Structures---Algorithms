#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *fp;
    char filename[100], word[100];
    char vowels[] = "aeiouAEIOU";
    int count = 0;

    // Prompt user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    // Read each word from the file until EOF
    while (fscanf(fp, "%99s", word) == 1)
    {
        int len = strlen(word);

        // Remove any trailing punctuation at the end of the word
        while (len > 0 && ispunct((unsigned char)word[len - 1]))
        {
            word[len - 1] = '\0';
            len--;
        }

        // Check if the last character is a vowel
        if (len > 0)
        {
            char last = word[len - 1];
            if (strchr(vowels, last) != NULL)
            {
                count++;
            }
        }
    }

    // Close the file
    fclose(fp);

    // Display the result
    printf("Number of words ending with a vowel: %d\n", count);

    return 0;
}
