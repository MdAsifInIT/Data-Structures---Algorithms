#include <stdio.h>
#include <string.h>

struct Faculty
{
    char name[51];
    int id;
    char department[31];
    char subject[5]; // "cp" or "oopd"
    union
    {
        struct
        {
            int hours;

            int credits;
        } cp;
        struct
        {
            int hours;
            int credits;
        } oopd;
    } subj;
};

int main()
{
    int n;
    printf("Enter number of faculty members: ");
    scanf("%d", &n);

    struct Faculty fac[100];

    for (int i = 0; i < n; i++)
    {
        printf("\nFaculty member %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", fac[i].name);
        printf("ID: ");
        scanf("%d", &fac[i].id);
        printf("Department: ");
        scanf(" %[^\n]", fac[i].department);
        printf("Subject (cp/oopd): ");
        scanf("%s", fac[i].subject);

        if (strcmp(fac[i].subject, "cp") == 0)
        {
            printf("Enter hours for Computer Programming: ");
            scanf("%d", &fac[i].subj.cp.hours);
            printf("Enter credits for Computer Programming: ");
            scanf("%d", &fac[i].subj.cp.credits);
        }
        else if (strcmp(fac[i].subject, "oopd") == 0)
        {
            printf("Enter hours for OOPD: ");
            scanf("%d", &fac[i].subj.oopd.hours);
            printf("Enter credits for OOPD: ");
            scanf("%d", &fac[i].subj.oopd.credits);
        }
        else
        {
            printf("Invalid subject. Defaulting to cp with 0 hours and 0 credits.\n");
            strcpy(fac[i].subject, "cp");
            fac[i].subj.cp.hours = 0;
            fac[i].subj.cp.credits = 0;
        }
    }

    printf("\n--- Faculty Details ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nFaculty member %d:\n", i + 1);
        printf("Name: %s\n", fac[i].name);
        printf("ID: %d\n", fac[i].id);
        printf("Department: %s\n", fac[i].department);
        if (strcmp(fac[i].subject, "cp") == 0)
        {
            printf("Subject: Computer Programming\n");
            printf("Hours: %d\n", fac[i].subj.cp.hours);
            printf("Credits: %d\n", fac[i].subj.cp.credits);
        }
        else
        {
            printf("Subject: OOPD\n");
            printf("Hours: %d\n", fac[i].subj.oopd.hours);
            printf("Credits: %d\n", fac[i].subj.oopd.credits);
        }
    }

    return 0;
}
