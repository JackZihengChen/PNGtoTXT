/**
 * @file main.cpp
 * A simple C++ program that manipulates an image in a variety of ways.
 */

#include "lab_intro.h"
#include "cs225/PNG.h"
#include <iostream>
#include <fstream>

int main() {
  cs225::PNG png;
  png.readFromFile("map2.png");
  std::ofstream myfile;
  myfile.open("map2.txt");
  toTxt(png, myfile);
  myfile.close();
  return 0;
}
