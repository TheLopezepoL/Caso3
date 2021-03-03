#include "arrayManager.h"
#include <chrono>

using namespace std::chrono;


int main() {
    // Creacion del Array
    static int array[10000000];
    int size = sizeof(array) / sizeof(*array);
    fillArray(array, size);

    //Analizar tiempo y memoria usados buscando un int
    auto start = high_resolution_clock::now();
    bool found = isInArray(array, size);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    cout << "El proceso se ejecuto en: " << duration.count() << " milisegundos." << endl;

    //Resultado de la busqueda
    return 0;
}
