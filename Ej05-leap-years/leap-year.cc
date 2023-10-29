/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file leap-years.cc
  * @author Javier Bueno Calzadilla alu0101627922@ull.edu.es
  * @date 25/10/2023
  * @brief El programa consiste en imprimir si un año es bisiesto o no.
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
  
  int year;
  std::cin >> year;
  
  if (year % 400 == 0) {
    std::cout << "YES" << std::endl; 
  } else if ((year % 4 == 0) && (year % 100 != 0)) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}
