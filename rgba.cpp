#include "rgba.h"

RGBA::RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha){
    m_red = red;
    m_green = green;
    m_blue = blue;
    m_alpha = alpha;
}

void RGBA::print(){
    std::cout << "red = " << (unsigned short int)m_red << std::endl;
    std::cout << "green = " << (unsigned short int)m_green << std::endl;
    std::cout << "blue = " << (unsigned short int)m_blue << std::endl;
    std::cout << "alpha = " << (unsigned short int)m_alpha << std::endl;
}
