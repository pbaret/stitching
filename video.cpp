#include <stdio.h>
#include <iostream>
 
#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/nonfree/nonfree.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/imgproc/imgproc.hpp"
 
using namespace cv;
 
void readme();
 
/** @function main */
int main( int argc, char** argv )
{

	if( argc != 2 )
	{ readme(); return -1; }
 	
 	string filename = "test/test_winter.mp4";
 	
 	VideoCapture capture(filename);
    capture.set(CV_CAP_PROP_FOURCC, CV_FOURCC('A', 'V', 'C', '1'));
    Mat frame;

    if( !capture.isOpened() )
        throw "Error when reading steam_avi";

    namedWindow( "w", 1);
 
	for(int i=0 ; i<100 ;i++ )
    {
        capture >> frame;

        imshow("w", frame);
        waitKey(0); // waits to display frame
    }
    waitKey(0); // key press to close window

	return 0;
}
 
/** @function readme */
void readme()
{ std::cout << " Usage: video < video_file >" << std::endl; }
