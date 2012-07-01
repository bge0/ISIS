#include <boost/thread.hpp>
#include "includes/cVision.h"
#include "includes/speech.h"
#include "includes/constants.h"
#include <boost/thread/mutex.hpp>
	bool isRunning=true;
int main(int argc, char* argv[]) {
    std::cout<<"isis: INIT"<<std::endl;
    cVision vision; //Define cVision thread obj
    speech listen; //define speech obj
//    boost::mutex::scoped_lock lock(gMutex);

    //Thread creation
    boost::thread cVision_thd(&cVision::Run, &vision);
    boost::thread speech_thd(&speech::Run, &listen);

	//Thread Joining
    cVision_thd.join();
    speech_thd.join();

	//End of ISIS
    std::cout<<"isis Going Down..."<<std::endl;
    return 0;
}
