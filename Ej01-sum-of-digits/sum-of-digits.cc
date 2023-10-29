/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file sum-of-digits.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 26/10/2023
  * @brief This program prints the sum of the digits of the introduced number.
  * @bug There are no known bugs
  */

#include <iostream>

 int sumar_digitos(int numero_introducido) {
   int suma_digitos{0};
   while (numero_introducido > 0) {
     int digito = numero_introducido % 10;
     suma_digitos += digito;
     numero_introducido /= 10;
   }
   return suma_digitos; 
}

int main () {
  int numero_introducido;
  std::cin >> numero_introducido;
  if (numero_introducido < 0) {
    std::cout << "El número introducido no es natural" << std::endl;
    return 1;
  }
  int digitos_sumados = sumar_digitos(numero_introducido);
  std::cout << digitos_sumados << std::endl;

return 0;
}

