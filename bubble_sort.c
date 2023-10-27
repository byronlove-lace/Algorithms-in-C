#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define SET_SIZE 50
#define RANGE_MAX 10000

void bubble(int target_set[], size_t, int(*)(int, int)); 
int ascending(int, int);
int descending(int, int);

int main (void)
{
        srand(time(NULL));

        int dataset[SET_SIZE];
        
        for (size_t i = 0; i < SET_SIZE; i++)
        {
                dataset[i] = rand() % RANGE_MAX;
        }

        printf("%s", "Enter 1 to sort in ascending order,\n"
                        "Enter 2 to sort in descending order: ");
        int order;
        scanf("%d", &order);

        puts("\nData items in original order");

        for (size_t i = 0; i < SET_SIZE; ++i)
                printf("%5d", dataset[i]);

        if (order = 1) 
        {
                bubble(dataset, SET_SIZE, ascending);
                puts("\nData items in ascending order");
        }
        else
        {
                bubble(dataset, SET_SIZE, descending);
                puts("\nData items in descending order");
        }

        puts("\nData items in sorted order");

        for (size_t i = 0; i < SET_SIZE; ++i)
                printf("%5d", dataset[i]);

        puts("");
}

void bubble(int target_set[], size_t size, int(*compare)(int a, int b))
{
        void swap(int *element1Ptr, int *element2Ptr);

        for (unsigned int pass = 1; pass < size; ++pass)
        {
                for (size_t i = 0; i < size - 1; ++i)
                {
                        if ((*compare)(target_set[i], target_set[i + 1]))
                                swap(&target_set[i], &target_set[i + 1]);
                }
        }
        
}

void swap(int *element1Ptr, int *element2Ptr)
{
        int hold = *element1Ptr;
        *element1Ptr = *element2Ptr;
        *element2Ptr = hold;
}

int ascending(int a, int b)
{
        return b < a;
}

int descending(int a, int b)
{
        return b > a;
}
