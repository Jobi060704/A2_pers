#ifndef COSC1076_A3_GREYSCALE_PIXEL_H
#define COSC1076_A3_GREYSCALE_PIXEL_H

#include "Pixel.h"

class GreyscalePixel: public Pixel{
public:   
    // Construct a GreyscalePixel with intensity channels initialized to 0
    GreyscalePixel();

    // Construct a GreyscalePixel with intensity channels 
    // initialized to intensity
    GreyscalePixel(unsigned int intensity);

    //Deconstructor
    ~GreyscalePixel();

    // Return the brightness of a pixel
    // brigtness for GreyscalePixel = intensity
    unsigned int getBrightness() const;

    // Should return a reference to the correspoinding 
    // channel value of the pixel
    // 'i' <- intensity
    unsigned int& operator[](const char channel);

private:
    /*                                           */
    /* DO NOT MOFIFY ANY CODE IN THIS SECTION    */
    /*                                           */
    
    unsigned int intensity; //intensity channel value
    
};

#endif //COSC1076_A3_GREYSCALE_PIXEL_H