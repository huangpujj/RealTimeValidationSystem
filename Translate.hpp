#ifndef _TRANSLATE_H_
#define _TRANSLATE_H_

#include <unistd.h> 
#include <chrono>
#include "Distortion.hpp"

class Translate: public Distortion 
{
    public: 
        Translate(uint32_t dur, cv::VideoCapture* vid, cv::Mat* frame, std::string window, int x, int y);
        void run(); 
        void update();

    private:
        void setX(int x);
        void setY(int y);
        void distort();
        std::chrono::system_clock::time_point m_start; 
        std::chrono::system_clock::time_point m_end;
        int m_width;
        int m_height;
        int m_x;
        int m_y;
};

#endif // _TRANSLATE_H_