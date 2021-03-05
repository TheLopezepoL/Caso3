# Caso3
## Medir tiempo de algoritmos en diferentes lenguajes

### Especificaciones:
  - Cpu Intel Core i7-8700 @3.20GHz
  - 8GBx2 RAM DDR4 3200

### Pasos:
  1. Programar un algoritmo que busca un int x en un array de N terminos utilizando una busqueda secuencial en los 4 lenguajes (C, C++, GO, Rust).
  2. Medir el uso de memoria con 9 pruebas en los algoritmos que usan C++ y C
  3. Medir el tiempo que tardó el algoritmo en los 4 lenguajes compilados diferente con 9 pruebas para cada uno.
  4. Tabular la informacion y guardar los pantallazos.

### Capturas
 - [Carpeta con las capturas de pantalla de cada lenguaje](./Capturas)

### Tabulacion
  - [Archivo Excel](./Tiempos&MemoriaFINAL.xlsx)

### Conclusiones
- Tomando en cuenta los resultados de nuestras pruebas, la afirmación A es falsa ya que no existe una diferencia del todo significativa entre el rendimiento en tiempo y memoria de u compilador exclusivo de C comparado con uno de C++. Nosotros utilizamos Tiny C Compiler y Microsoft Visual C++ compiiler para C++.
- Por otro lado la afirmación B resultó ser verdadera ya que a través de las pruebas que realizamos, el rendimiento de tiempo del algoritmo de busqueda secuencial compilado en C++ resultó ser mucho más rápido que los de Go y Rust.
