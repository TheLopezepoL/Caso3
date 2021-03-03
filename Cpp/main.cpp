#include "arrayManager.h"
#include <chrono>

using namespace std::chrono;


int main() {
    // Creacion del Array
    static int array[10000000];
    int size = sizeof(array) / sizeof(*array);
    fillArray(array, size);

    //Analizar tiempo y memoria usados buscando un int
    clock_t time;
    time = clock();
    bool found = isInArray(array, size);
    time = clock() - time;

     double time_taken = double(time) / double(CLOCKS_PER_SEC); 

     printf("linearSearch() took %f seconds to execute \n", time_taken); 

    return 0;
}
