
struct node {
    int value;
    struct node *next;
};

struct node *newNode(int value);

struct node *listAppend(struct node *list, int value) {
    if (list == NULL) {
        return newNode(value);
    } else {
        list->next = listAppend(list->next, value);
        return list;
    }
}

struct node *newNode(int value) {
    struct node *n = malloc(sizeof(struct node));
    if (n == NULL) {
        fprintf(stderr, "error: out of memory\n");
        exit(EXIT_FAILURE);
    }

    n->value = value;
    n->next = NULL;
    return n;
}
