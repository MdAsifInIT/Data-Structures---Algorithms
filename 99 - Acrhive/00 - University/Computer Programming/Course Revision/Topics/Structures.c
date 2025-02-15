#include <stdio.h>
#include <string.h>

typedef struct faculty
{
    char name[50];
    int id;
    char department[30];
    char subject[4];
    int hours;
    int credits;

} fac;

int main()
{

    fac bits[100];
    strcpy(bits[0].name, "Venkat Kumar Paswaan");
    bits[0].id = 556617;

    printf("%s %d", bits[0].name, bits[0].id);
    return 0;
}