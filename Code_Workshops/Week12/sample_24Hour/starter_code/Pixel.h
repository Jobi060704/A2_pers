#ifndef COSC1076_A3_PIXEL_H
#define COSC1076_A3_PIXEL_H

//minimum and maximum values for pixel
#define PIX_MIN 0
#define PIX_MAX 255
/*                                           */
/* This is an abstract class that describe   */
/* the general concepts of a pixel           */
/*                                           */

class Pixel{
public:    

    // get the brightness of the pixel
    unsigned int getBrightness() const;

    //[] operator to access a channel in the pixel
    unsigned int& operator[](const char channel);

private:
    
};

#endif //COSC1076_A3_PIXEL_H