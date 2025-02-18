#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    // Pointers to keep track of the first and last nodes
    struct Node *first = NULL, *last = NULL;

    // Step A: Create a singly linked list with 3 integer elements

    // Create first node
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    node1->data = 10;
    node1->next = NULL;

    // Create second node
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    node2->data = 20;
    node2->next = NULL;

    // Create third node
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));
    node3->data = 30;
    node3->next = NULL;

    // Link the nodes: node1 -> node2 -> node3
    node1->next = node2;
    node2->next = node3;

    // Initialize first and last
    first = node1;
    last = node3;

    // Step B: Insert an element at the front of the list
    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 5;     // The new front element
    newNode->next = first; // Link newNode to the existing first
    first = newNode;       // Update first to this new node

    // Step C: Display all elements in the list
    printf("Elements in the list:\n");
    struct Node *temp = first;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    // Optional: You can print the last node's data to confirm 'last' pointer
    printf("Last node data: %d\n", last->data);

    return 0;
}
