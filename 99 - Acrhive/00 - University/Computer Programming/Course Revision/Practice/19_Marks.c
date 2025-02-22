#include <stdio.h>

int main()
{
    FILE *f = fopen("Marks.dat", "r"), *p = fopen("PASS", "w"), *q = fopen("FAIL", "w");
    int m;
    if (!f || !p || !q)
    {
        puts("Error");
        return 1;
    }
    while (fscanf(f, "%d", &m) == 1)
        fprintf(m > 49 ? p : q, "%d\n", m);
    fclose(f);
    fclose(p);
    fclose(q);
    puts("Done.");
}