#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int array[2000000];

 int linearSearch(int arr[], int size, int num){
     for(int i = 0; i<size; i++){
         if(arr[i] == num)
            return arr[i];
     }
     return -1;
 }

 int main(){

     int size = sizeof(array) / sizeof(array[0]);

     clock_t time;

     for(int i = 0; i < size; i++){
         array[i] = rand() % 10;
     }

     time = clock();
     linearSearch(array, size, 15);
     time = clock() - time;
     double time_taken = ((double)time)/CLOCKS_PER_SEC;

     printf("linearSearch() took %f seconds to execute \n", time_taken); 
     return 0;
 }