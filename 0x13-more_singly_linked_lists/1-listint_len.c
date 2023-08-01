#include <stddef.h>

/* Definition of the linked list node */
typedef struct listint_s {
    int data;
    struct listint_s *next;
} listint_t;

/* Function to calculate the length of the linked list */
size_t listint_len(const listint_t *h) {
    size_t count = 0;
    const listint_t *current = h;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}
