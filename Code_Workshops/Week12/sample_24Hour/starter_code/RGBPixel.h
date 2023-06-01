#ifndef COSC1076_A3_RGB_PIXEL_H
#define COSC1076_A3_RGB_PIXEL_H

#include "Pixel.h"

class RGBPixel: public Pixel{
public:    
    // Construct a RGBPixel with all channels initialized to 0
    RGBPixel();

    // Construct a RGBPixel with all channels initialized to r,g,b
    RGBPixel(unsigned int r, unsigned int g, unsigned int b);

    //Deconstructor
    ~RGBPixel();

    // Return the brightness of a pixel
    // brigtness for RGBPixel = (r + g + b)/3
    unsigned int getBrightness() const;

    // Should return a reference to the correspoinding 
    // channel value of the pixel
    // 'r' <- red channel
    // 'g' <- green channel
    // 'b' <- blue channel
    unsigned int& operator[](const char channel);

private:
    /*                                           */
    /* DO NOT MOFIFY ANY CODE IN THIS SECTION    */
    /*                                           */
    
    unsigned int r; //red channel value
    unsigned int g; //green channel value
    unsigned int b; //blue channel value
    
};

#endif //COSC1076_A3_RGB_PIXEL_H