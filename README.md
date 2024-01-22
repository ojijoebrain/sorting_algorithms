0x1B. C - Sorting algorithms & Big O 
# project between Lovette Duke and Oji joseph Oji 


****Structure and Functions*********
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}


#files
print_array.c
print_list.c

#data structure for doubly linked list:
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
*******Prototype:
0. void bubble_sort(int *array, size_t size);
1. void insertion_sort_list(listint_t **list);
2. void selection_sort(int *array, size_t size);
3. void quick_sort(int *array, size_t size);
4. void cocktail_sort_list(listint_t **list);
5. void counting_sort(int *array, size_t size);
6. void merge_sort(int *array, size_t size);
7. void heap_sort(int *array, size_t size);
8. void radix_sort(int *array, size_t size);
9. void bitonic_sort(int *array, size_t size);
10.void quick_sort_hoare(int *array, size_t size);
11.void sort_deck(deck_node_t **deck);

#Task 
0.Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm
You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
1.Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
2.Write a function that sorts an array of integers in ascending order using the Selection sort algorithm
3.Write a function that sorts an array of integers in ascending order using the Quick sort algorithm
4.Write a function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence
5.Write a function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm
6.Write a function that sorts an array of integers in ascending order using the Counting sort algorithm
7.Write a function that sorts an array of integers in ascending order using the Merge sort algorithm
8.Write a function that sorts an array of integers in ascending order using the Heap sort algorithm
9.Write a function that sorts an array of integers in ascending order using the Radix sort algorithm
10.Write a function that sorts an array of integers in ascending order using the Bitonic sort algorithm
11. Write a function that sorts an array of integers in ascending order using the Quick sort algorithmi
