// Copyright © 2021 Dylan Melo All rights reserved
//
// Created by Dylan Melo
// Created on December 2021
// This program asks the user for the subtotal of the
// purchase. It then calculates and displays the total cost
// of the pruchase with Alberta's HST (15%)
#include <iostream>

int main() {
  // declare constants
  const float HST = 0.15;

  // declare variables
  float total, tax, subtotal;

  // get the diameter from the user
  std::cout << "Enter the subtotal : ";
  std::cin >> subtotal;

  // calculate the tax using HST * subtotal

  tax = HST * subtotal;

// calculate the total using subtotal plus tax

  total = subtotal + tax;

  // display the Total to the user
  std::cout << "\n";
  std::cout << "total = " << total << " $" << std::endl;
}
