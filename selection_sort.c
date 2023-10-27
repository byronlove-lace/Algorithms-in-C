#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define SET_SIZE 50
#define RANGE_MAX 10000

void selection_sort(unsigned int target_arr[], size_t); 
void print_arr(const unsigned int target_arr[], size_t);

int main(void)
{
        srand(time(NULL));

        unsigned int dataset[SET_SIZE];
        
        for (size_t i = 0; i < SET_SIZE; i++)
        {
                dataset[i] = rand() % RANGE_MAX;
        }
        
        selection_sort(dataset, SET_SIZE);
        print_arr(dataset, SET_SIZE);

}

void print_arr(const unsigned int target_arr[], size_t len)
{
        for (size_t i = 0; i < len; i++)
                printf("%lu.\t%u\n", i+1, target_arr[i]);
}

void selection_sort(unsigned int target_arr[], size_t len) 
{
        for(size_t i = 0; i < len; i++)
        {
                for(size_t j = i; j < len; j++)
                {
                        if (target_arr[i] > target_arr[j])
                        {
                                unsigned int swap = target_arr[i];
                                target_arr[i] = target_arr[j];
                                target_arr[j] = swap;
                        }

                }
        }
}

