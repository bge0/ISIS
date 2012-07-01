#include "includes/speech.h"

speech::speech() {    std::cout << "speech System: INIT" << std::endl; } // Constructor
speech::~speech() {     } // Destructor

void speech::Run() {
    boost::posix_time::seconds workTime(5);
    boost::this_thread::sleep(workTime);
	isRunning=false;
	std::cout << "speech System: Terminated" << std::endl;
}
