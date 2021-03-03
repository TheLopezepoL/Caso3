#include <stdio.h>
#include <stdlib.h>

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

     for(int i = 0; i < size; i++){
         array[i] = rand() % 10;
     }

     linearSearch(array, size, 15);
    

     return 0;
 }