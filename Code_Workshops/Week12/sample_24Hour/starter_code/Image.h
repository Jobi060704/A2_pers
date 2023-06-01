#ifndef COSC1076_A3_IMAGE_H
#define COSC1076_A3_IMAGE_H

#include <vector>

#include "Pixel.h"
#include "RGBPixel.h"
#include "GreyscalePixel.h"

class Image{
public:    
    //Construct an image with nRows (number of rows) and
    // nCols (number of columns).
    Image(int nRows, int nCols);

    //Deconstructor: should clear the image
    ~Image();

    //should return the pixel(RGBPixel or GreyscalePixel) at [row,col]
    ? get(int row, int col);

    //Set the pixel at (row,col) to pix
    void set(int row, int col, ? pix);

private:

    //Should be a vector of vector 
    std::vector<std::vector> img;
    
};


#endif //COSC1076_A3_IMAGE_H