#ifndef CVISION_H_
#define CVISION_H_

#include <iostream>
#include <boost/date_time.hpp>
#include <boost/thread.hpp>
#include <boost/thread/mutex.hpp>
#include "includes/constants.h"
#include "cv.h"
#include "highgui.h"

class cVision {
    public:
        cVision(); // Constructor
        ~cVision(); // Destructor
        void Run();
};

#endif
