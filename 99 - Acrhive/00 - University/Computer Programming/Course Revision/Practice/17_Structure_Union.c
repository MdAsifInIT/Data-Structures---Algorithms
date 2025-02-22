#include <stdio.h>
#include <string.h>

struct Det
{
    int h, c;
};

struct Faculty
{
    char name[51], dept[31], subj[5];
    int id;
    union
    {
        struct Det cp, oopd;
    } d;
};

int main()
{
    int n;
    printf("Number of faculty: ");
    scanf("%d", &n);
    struct Faculty f[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nFaculty %d:\nName: ", i + 1);
        scanf(" %[^\n]", f[i].name);
        printf("ID: ");
        scanf("%d", &f[i].id);
        printf("Department: ");
        scanf(" %[^\n]", f[i].dept);
        printf("Subject (cp/oopd): ");
        scanf("%4s", f[i].subj);

        struct Det *dt = &f[i].d.cp;
        if (strcmp(f[i].subj, "oopd") == 0)
        {
            dt = &f[i].d.oopd;
        }
        else if (strcmp(f[i].subj, "cp") != 0)
        {
            printf("Invalid subject. Using CP (0/0).\n");
            strcpy(f[i].subj, "cp");
            dt->h = 0;
            dt->c = 0;
            continue;
        }

        printf("Hours: ");
        scanf("%d", &dt->h);
        printf("Credits: ");
        scanf("%d", &dt->c);
    }

    printf("\n--- Faculty Details ---\n");
    for (int i = 0; i < n; i++)
    {
        int is_cp = strcmp(f[i].subj, "cp") == 0;
        struct Det *dt = is_cp ? &f[i].d.cp : &f[i].d.oopd;

        printf("\nFaculty %d:", i + 1);
        printf("\nName: %s", f[i].name);
        printf("\nID: %d", f[i].id);
        printf("\nDepartment: %s", f[i].dept);
        printf("\nSubject: %s", is_cp ? "Computer Programming" : "OOPD");
        printf("\nHours: %d", dt->h);
        printf("\nCredits: %d\n", dt->c);
    }
    return 0;
}