/*                                           */
/* DO NOT MOFIFY ANY CODE IN THIS FILE       */
/*                                           */

#include <exception>
#include <stdexcept>
#include <iostream>
#include <random>
#include <iomanip>

#include "Image.h"
#include "Pixel.h"
#include "RGBPixel.h"
#include "GreyscalePixel.h"

#define IMAGE_ROWS  10
#define IMAGE_COLS  10

int main(){

    /*                                           */
    /* DO NOT MOFIFY ANY CODE IN THIS SECTION    */
    /*                                           */

    //Create an RGB image
    Image<RGBPixel> imageRGB(IMAGE_ROWS, IMAGE_COLS);

    //Initialize the pixels to random values
    RGBPixel pixrgb;
    std::random_device engine;
    std::uniform_int_distribution<unsigned int> uniform_dist(PIX_MIN, PIX_MAX);
    for (int i = 0; i != IMAGE_ROWS; ++i) {
        for (int j = 0; j != IMAGE_COLS; ++j) {
            pixrgb['r'] = uniform_dist(engine);
            pixrgb['g'] = uniform_dist(engine);
            pixrgb['b'] = uniform_dist(engine);
            
            imageRGB.set(i, j, pixrgb);
        }
    }

    // Print the brightness of each pixel
    std::cout << "*** Printing RGB image Brightness ***" << std::endl;
    for (int i = 0; i != IMAGE_ROWS; ++i) {
        for (int j = 0; j != IMAGE_COLS; ++j) {
            std::cout << std::setfill('0') << std::setw(3) 
                            << imageRGB.get(i, j).getBrightness() << " ";
        }
        std::cout << std::endl;
    }

    std::cout << " " << std::endl;


    //Create a greyscale image
    Image<GreyscalePixel> imageGS(IMAGE_ROWS, IMAGE_COLS);

    //Initialize the pixels to random values
    GreyscalePixel pixgs;
    for (int i = 0; i != IMAGE_ROWS; ++i) {
        for (int j = 0; j != IMAGE_COLS; ++j) {
            pixgs['i'] = uniform_dist(engine);
            imageGS.set(i, j, pixgs);
        }
    }

    // Print the brightness of each pixel
    std::cout << "*** Printing Greyscale image Brightness ***" << std::endl;
    for (int i = 0; i != IMAGE_ROWS; ++i) {
        for (int j = 0; j != IMAGE_COLS; ++j) {
            std::cout << std::setfill('0') << std::setw(3) 
                                << imageGS.get(i, j).getBrightness() << " ";
        }
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}