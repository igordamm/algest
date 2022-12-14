#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *previous;
} Node;

typedef struct List
{
    Node *list;
    Node *lastElmnt;
    int counter;
} List;

/**
 * Create a new list and populate with data from given int data array.
 */
List *Lkd_CreateNPopulateList(int data[], int dataLength);

/**
 * Print all elements in the list to stdout.
 */
void Lkd_PrintList(List *lst);

/**
 * Create and add a new element containing data at the end of the list.
 */
void Lkd_PushBack(List *lst, int data);

/**
 * Create and add a new element at the beginning of the list.
 */
void Lkd_PushFront(List *lst, int data);

/**
 * Create and add a new element at the n-th position of the list.
 * If there isn't a n-th element, add element at the end.
 */
void Lkd_Push(List *lst, int n, int data);

/**
 * Return the first element of the list.
 */
Node *Lkd_GetFirstElmnt(List *lst);

/**
 * Return the last element of the list.
 */
Node *Lkd_GetLastElmnt(List *lst);

/**
 * Return the element at the n-th position of the sequence in the list
 * or return NULL if there isn't a n-th element.
 */
Node *Lkd_GetElement(List *lst, int n);

/**
 * Return the amount of elements in the list.
 */
int Lkd_Count(List *lst);

/**
 * Remove element at the n-th position of the list if it exists.
 */
void Lkd_Pop(List *lst, int n);

/**
 * If it exists, remove the last element from the list.
 */
void Lkd_PopBack(List *lst);

/**
 * If it exists, remove the first element from the list.
 */
void Lkd_PopFront(List *lst);

/**
 * If there is any, remove all the elements from the list.
 */
void Lkd_Clear(List *lst);

#endif