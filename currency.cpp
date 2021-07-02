#include <iostream>

//This program converts the amount of certain currencies into US dollars

int main() {

  //state the variables
  double pesos, reais, soles, dollars;

  //welcome message
  std::cout << "Welcome to your currency converter! \n";
  
  //Start asking for the amount of currencies
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  //Convert the amounts to US dollars

  // 1 US dollar = 3781.50 COP
  dollars = pesos/3781.5;

  // 1 US dollar = 5.03 Reals
  dollars += reais/5.03;

  // 1 US dollar = 3.87 Sol
  dollars += soles/3.87;

  //Output the US dollar value
  std::cout << "US Dollars = $" << dollars <<"\n";

}
