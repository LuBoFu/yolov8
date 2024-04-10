#include<iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
 
int main()
{
    cv::Mat img = cv::imread("0.jpg");
    
    cv::imshow("i", img);
    cv::waitKey(0);
 
    return 0;
}