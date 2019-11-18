#ifndef TEST_H
#define TEST_H

#include "Queue.h"
#include <iostream>
using namespace std;

class Test
{
  private:
    Queue my_Queue1, my_Queue2, my_Queue3;
  public:
	Test();
     ~Test();
     void queueTesterSet();

//isEmpty()
     string isEmpty();
//enqueue()
     string ableEnqueue();
     string ableEnqueue5();
     string correctEnqueue();
//dequeue()
     string dequeueThruRnTmEr();
     string ableDequeue();
     string correctDequeue();
//peekFront()
     string ablePeekFront();
     string correctPeekFront();
     string peekFrontThruRnTmEr();
//memory Leak
     string MemoryLeak();
};
#endif
