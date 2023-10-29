/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file decimal-to-binary.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 26/10/2023
  * @brief El programa consiste en imprimir "Hello World" en la pantalla.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  int numero_decimal;
  int numero_binario = 0;
  int base = 1;

  std::cout << "Introduce un número decimal: "; 
  std::cin >> numero_decimal;

  while (numero_decimal > 0) {
    int digito = numero_decimal % 2;
    numero_binario += digito * base;
    numero_decimal /= 2;
    base *= 10;
  }

  std::cout << "Su número en binario es: " << numero_binario << std::endl;

  return 0;
}
