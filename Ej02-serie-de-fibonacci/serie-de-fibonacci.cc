/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file serie-de-fibonacci.cc 
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 26/10/2023
  * @brief This program prints the first numbers of the fibonacci sequence.
  * introduced.
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>

std::vector<int> suma_serie_fibonacci(int numero_de_elementos) { 
  std::vector<int> serie;
  int suma{0};
  serie.push_back(0);
  int numero_0 {0};
  int numero_1 {1};
  for (int i = 1; i <= numero_de_elementos; i++) {
    serie.push_back(numero_1);
    suma = numero_0 + numero_1;
    numero_0 = numero_1;
    numero_1 = suma;
    
}
  return serie;
}
int main () {

  int numero_0{0};
  int numero_1{1};
  int numero_de_elementos; 
  std::cout << "Introduce la cantidad de elementos de la serie de Fibonacci que quieres: ";
  std::cin >> numero_de_elementos;
  std::vector<int> serie = suma_serie_fibonacci(numero_de_elementos);
  for (int fibonacci : serie) {
    std::cout << fibonacci <<  " ";
}
  std::cout << std::endl;

return 0;
} 


