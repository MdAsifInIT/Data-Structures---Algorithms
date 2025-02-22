#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void p(Node *c)
{
    for (; c; c = c->next)
        printf("%d ", c->data);
    puts("");
}

int main()
{
    Node *f = NULL, *l = NULL;
    for (int i = 0; i < 3; i++)
    {
        Node *n = malloc(sizeof(*n));
        n->data = 10 * (i + 1), n->next = NULL;
        f ? (l->next = n) : (f = n), l = n;
    }

    printf("Initial:\n"), p(f);

    int v;
    printf("Insert: "), scanf("%d", &v);
    Node *n = malloc(sizeof(*n));
    n->data = v, n->next = f, f = n;

    printf("Updated:\n"), p(f);
}