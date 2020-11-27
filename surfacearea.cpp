// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on November 2020
// This program calculates the surface area of a cylinder.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <cmath>

int main() {
  // variable declarations
  int radius;
  int height;
  int area;
  // input
  std::cout << "Enter the radius of the cylinder (mm): ";
  std::cin >> radius;
  std::cout << "Enter the height of the cylinder (mm): ";
  std::cin >> height;
  // process
  area = 2*radius*radius*M_PI +(2*M_PI*height*radius);
  // output
  std::cout << "Surface area is " << (area) << "mm2" << std::endl;
}
