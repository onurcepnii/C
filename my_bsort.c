#include <stdio.h>
#include <time.h>

#define ASIZE(a)            (sizeof(a) / sizeof(a[0]))
#define RANDOMIZE()         srand((unsigned)time(NULL))

#define TRUE     1
#define FALSE    0

void my_bsort(int ar[], size_t size)
{
    int swapped = FALSE;
    do{
        swapped = FALSE;
        for(size_t i = 0; i < size; i++)
        {
            for(size_t j = 0; j < (size - 1 - i); j++)
            {
                if(ar[j] > ar[j+1]) //swap
                {
                    int temp = ar[j];
                    ar[j] = ar[j+1];
                    ar[j+1] = temp;
                    swapped = TRUE;
                }
            }
        }
    }while(swapped);
}

void print_array(int ar[], size_t size)
{
    for(int i = 0; i < size; i++)
    {
        printf("% d ", ar[i]);
    }
}

int main(void){
    //test code
    RANDOMIZE();

    for(;;){
        int ar[10] = { 0 };

        for(size_t i = 0; i < ASIZE(ar); i++) // randomly initialize the array
        {
            ar[i] = rand() % 10;
        }

        printf("unsorted array : ");
        print_array(ar, ASIZE(ar));

        my_bsort(ar, ASIZE(ar));

        printf("\nsorted:");
        print_array(ar, ASIZE(ar));

        printf("\nPress enter for the next array.\n");
        getchar(); // enter for next array
    }


}
