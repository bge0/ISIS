#ifndef CNST_H_INCLUDED
#define CNST_H_INCLUDED
#include <boost/thread/mutex.hpp>
static boost::mutex gMutex;
extern bool isRunning;
#endif
