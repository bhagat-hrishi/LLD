#ifndef logger_h
#define logger_h

#include <string>
#include <mutex>
using namespace std;

class Logger
{
    public:
        static Logger* getLogger();
        void log(string msg);

        // Delete copy constructor and assignment operator
        Logger(const Logger&) = delete ; 
        Logger operator= (const Logger&) = delete ;
        
    private:
        static  Logger* loggerInstance;
        Logger();

        static mutex mtx;//mutex to ensure thread safety
};

#endif