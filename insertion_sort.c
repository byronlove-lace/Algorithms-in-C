#include<stdio.h>

#define SIZE 6

void insert_sort(int *arr, size_t);

int main (void)
{
        int basic[SIZE] = {5, 2, 4, 6, 1, 3};
        int testy[SIZE] = {31, 41, 59, 26, 41, 58};

        insert_sort(testy, SIZE);

        for (size_t i = 0; i < SIZE; ++i)
                printf("%d,\t", testy[i]);
        puts("");
}

void insert_sort(int *arr, size_t len)
{
       for (size_t i = 1; i < len; ++i)
       {
               int key = *(arr + i); 
               int j = i - 1;

               while (j > -1 && (*(arr + j) > key)) // compare key with val to left / why while j > 0?
               {
                       *(arr + j + 1) = *(arr + j); // if left val is bigger: move that val right
                       --j;
               }
               *(arr + j + 1) = key; // new key = val to the right // rem: key is just a target
       }
}
