#include "arrayManager.h"
#include <chrono>
#include "windows.h"
#include "psapi.h"

using namespace std::chrono;


int main() {
    // Creacion del Array
    static int array[10000000];
    int size = sizeof(array) / sizeof(*array);
    fillArray(array, size);

    //Analizar tiempo y memoria usados buscando un int
    clock_t time = clock();
    bool found = isInArray(array, size);
    time = clock() - time;

    PROCESS_MEMORY_COUNTERS_EX pmc;
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
    SIZE_T memory_taken = pmc.WorkingSetSize;

     double time_taken = double(time) / double(CLOCKS_PER_SEC);

     printf("linearSearch() took %f seconds to execute. \n", time_taken);
     printf("linearSearch() took %lu bits to execute. \n", memory_taken);

     //Resultado del proceso
     if (found)
         printf("Se encontro el numero.\n");
     else
         printf("No se encontro el numero.\n");

    return 0;
}
