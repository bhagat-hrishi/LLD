#include <iostream>
#include <thread>
#include "logger.hpp"

using namespace  std;

void user1Logs()
{
    Logger *logger1 = Logger::getLogger();
    logger1->log("this is msg from user 1");
}
void user2Logs()
{
    Logger *logger2 = Logger::getLogger();
    logger2->log("this is msg from user 2");
}
int main()
{
    std::thread t1(user1Logs);
    std::thread t2(user2Logs);

    t1.join(); 
    t2.join();
    
    return 0;
}
