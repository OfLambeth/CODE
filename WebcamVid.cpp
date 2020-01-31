#include "opencv2/opencv.hpp"
#include <stdint.h>
#include <iostream>
//#include <gst/gst.h>

using namespace cv;
using namespace std;

const int fps = 20;

int main(int argv, char** argc) {

	// A Mat object to store and process each subsequent frame:
	Mat frame;

	// Ceating a vieo capture object:
	VideoCapture vid(0);

	if (!vid.isOpened()) {

		return -1;
	}

	while (vid.read(frame)) { // OR while(true)

		imshow("Webcam", frame);

		if (waitKey(1000/fps) >= 0) break;

	}

	return 1;
}