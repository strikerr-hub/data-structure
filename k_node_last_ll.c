#include "linked_list.h"
int main()
{
    node *start;
    int n;
    printf("Create Linked List\n");
    printf("Enter number of nodes\n");
    scanf("%d", &n);
    start = create(n);
    printf("The linked list is\n");
    display(start);
    int ele;
    printf("Enter node number from last\n");
    scanf("%d", &ele);
    k_node_last(start, ele);
    return 0;
}