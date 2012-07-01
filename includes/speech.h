#ifndef SPEECH_H_
#define SPEECH_H_

#include <iostream>
#include <boost/date_time.hpp>
#include <boost/thread.hpp>
#include <boost/thread/mutex.hpp>
#include "includes/constants.h"

class speech {
    public:
        speech(); // Constructor
        ~speech(); // Destructor
        void Run();
};

#endif
