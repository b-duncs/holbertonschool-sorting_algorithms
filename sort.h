#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void merge(int *array, int l, int m, int r, int *final_array);
void call_to_sort(int *array, int l, int r, int *final_array);
void merge_sort(int *array, size_t size);
int max(int *a, int n, int i, int j, int k);
void sift(int *a, int n, int i);
void heap_sort(int *array, size_t size);

#endif
