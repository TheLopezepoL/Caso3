#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "windows.h"
#include "psapi.h"
//10420072
//8773632
 int array[20000000];

 bool linearSearch(int arr[], int size, int num){
     for(int i = 0; i<size; i++){
         if(arr[i] == num)
            return 1;
     }
     return 0;
 }

 int main(){

     int size = sizeof(array) / sizeof(array[0]);

     srand((unsigned)time(NULL));
     for(int i = 0; i < size; i++){
         array[i] = rand() % 10;
     }
     clock_t time;

     time = clock();
     linearSearch(array, size, 15);
     time = clock() - time;

     PROCESS_MEMORY_COUNTERS_EX pmc;
     GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
     SIZE_T memory_taken = pmc.WorkingSetSize;

     double time_taken = ((double)time)/CLOCKS_PER_SEC;

     printf("linearSearch() took %f seconds to execute. \n", time_taken);
     printf("linearSearch() took %lu second to execute. \n", memory_taken);

     return 0;
 }