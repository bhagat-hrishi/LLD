#include <iostream>
#include "logger.hpp"

using namespace std;

Logger* Logger::loggerInstance = nullptr;//initialization of static instance
mutex Logger::mtx;

Logger::Logger()
{
    cout<<"New instance created. "<<endl;
}

void Logger::log(string msg)
{
    cout<<msg<<endl;
}

Logger* Logger::getLogger()
{
    if(loggerInstance == nullptr)//we need to put lock only when first time instance is created we don't need to put lock for next time onwards
    {   
        mtx.lock();
        if(loggerInstance == nullptr)//if instance is not created for first time then create it
        {
            loggerInstance = new Logger();
        }
        mtx.unlock();
    }

    return loggerInstance;//if it is allready created then return it
}