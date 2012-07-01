#include "includes/cVision.h"

cVision::cVision() {    std::cout << "cVision System: INIT" << std::endl; } // Constructor
cVision::~cVision() {    } // Destructor

void cVision::Run() {
	while(isRunning)
	{
	 	//to use any available cam use CV_CAP_ANY
		CvCapture* capture = cvCaptureFromCAM(0);
		assert( capture != NULL );
		std::cout << "cVision System: Terminated" << std::endl;
	}
}
