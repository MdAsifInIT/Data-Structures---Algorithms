#include <stdio.h>
#include <ctype.h> // For toupper() and isalnum()

int main()
{
    int n1 = 3, n2 = 4, n3, n4;
    unsigned int u1 = 2, u2, u3, u4;
    char c1, c2, c3;

    /* Arithmetic Operations */
    /* Initialize n1 and n2 */
    n1 = 3;
    n2 = 4;

    /* Write an expression for:
    * computing the sum of cube of n1 and the square of n2 and
    * storing the value in n3 as well as in n4
    */
    n3 = n4 = ((n1 * n1 * n1) + (n2 * n2));

    /* Print the values n1, n2, n3, and n4 */
    printf("n1 = %d \n", n1);
    printf("n2 = %d \n", n2);
    printf("n3 = %d \n", n3);
    printf("n4 = %d \n", n4);

    /* Initialize n1, n2, and n3 */
    n1 = 3;
    n2 = 4;
    n3 = 5;

    /* Conditional Expressions */
    // Check whether n1, n2, and n3 form sides of a right triangle;
    // * n4 should be 0 if they are not and
    // * should be non-zero if they are 
    if ((n3 * n3) == (n1 * n1) + (n2 * n2))
    {
        n4 = 1;
    }
    else
    {
        n4 = 0;
    }

    /* Assignment Operations */
    /* The following expression is intended to compute the square of u1+u2 and
    assign it to u3 – Fix it. */
    u3 = (u1 + u2) * (u1 + u2);

    /* The following expression is intended to increment u1 and assign u1+6 to
    u2 – Fix it. */
    u2 = ++u1 + 5;

    /* Will the following expression fix the above? If not change it to fix! */
    u2 = (++u1, u1 + 5); // Correct as is

    /* Initialize characters c1 and c2 */
    c1 = 'a';
    c2 = 'E';

    /* Check whether two characters are the same (case-insensitive i.e. uppercase or lowercase does not matter) */
    if (toupper(c1) == toupper(c2))
    {
        printf("Characters are the same (case-insensitive).\n");
    }
    else
    {
        printf("Characters are different.\n");
    }

    /* Initialize character c1 */
    c1 = '$';

    /* Check that it is neither whitespace (space, tab or newline) nor alphanumeric */
    if (!isalnum(c1) && c1 != ' ' && c1 != '\t' && c1 != '\n')
    {
        printf("c1 is neither whitespace nor alphanumeric.\n");
    }

    /* Initialize character c2 */
    c2 = 'O';

    /* Check whether it is a vowel (in lower-case or in upper-case). */
    if (c2 == 'a' || c2 == 'e' || c2 == 'i' || c2 == 'o' || c2 == 'u' ||
        c2 == 'A' || c2 == 'E' || c2 == 'I' || c2 == 'O' || c2 == 'U')
    {
        printf("c2 is a vowel.\n");
    }
    else
    {
        printf("c2 is not a vowel.\n");
    }

    /* Printing and Formatting */
    /* Print an integer, padded on left with spaces to total 6 chars */
    printf("%6d\n", 123);

    /* Print an integer, padded on right with spaces to total 6 chars */
    printf("%-6d\n", 123);

    /* Print an integer, padded on left with zeroes to total 6 chars */
    printf("%06d\n", 123);

    return 0;
}
