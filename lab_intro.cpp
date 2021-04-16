/**
 * @file lab_intro.cpp
 * Implementations of image manipulation functions.
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include "lab_intro.h"

#include <iostream>
#include <fstream>

using cs225::HSLAPixel;
using cs225::PNG;

void toTxt(PNG image, std::ofstream & myfile) {
  for (unsigned y = 0; y < image.height(); y++) {
    for (unsigned x = 0; x < image.width(); x++) {
      HSLAPixel & pixel = image.getPixel(x, y);
      //pixel is black
      if(pixel.l > 0.75)
        myfile << "1";
      else
        myfile << "0";
    }
    myfile << "\n";
  }
  return;
}