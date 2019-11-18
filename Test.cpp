#include "Test.h"

Test::Test()
{
  queueTesterSet();
}

Test::~Test()
{

}

void Test::queueTesterSet()
{
  cout<<"Test 1: "<<isEmpty()<<endl;

  cout<<"Test 2: "<<ableEnqueue()<<endl;
  my_Queue1.enqueue(5);
  cout<<"Test 3: "<<ableEnqueue5()<<endl;
  my_Queue1.enqueue(10);
  cout<<"Test 4: "<<correctEnqueue()<<endl;

  cout<<"Test 5: "<<dequeueThruRnTmEr()<<endl;
  my_Queue2.enqueue(1);
  my_Queue2.dequeue();
  cout<<"Test 6: "<<ableDequeue()<<endl;
  my_Queue3.enqueue(1);
  my_Queue3.enqueue(5);
  my_Queue3.enqueue(10);
  my_Queue3.enqueue(15);
  my_Queue3.dequeue();
  cout<<"Test 7: "<<correctDequeue()<<endl;

  cout<<"Test 8: "<<ablePeekFront()<<endl;
  cout<<"Test 9: "<<correctPeekFront()<<endl;
  cout<<"Test 10: "<<peekFrontThruRnTmEr()<<endl;

  cout<<"Test 11: "<<MemoryLeak()<<endl;

}

string Test::isEmpty()
{
  cout<<"Newly created Queue is empty: ";
  Queue q;
  if (q.isEmpty())
  {
    return ("PASSED");
  }
  else
  {
    return ("FAILED");
  }
}

/**********************************Enqueue*************************************/

string Test::ableEnqueue()
{
  cout<<"Enqueing a value makes the Queue not empty: ";
  Queue q;
  q.enqueue(1);
  if (q.isEmpty())
  {
    return ("FAILED");
  }
  else
  {
    return ("PASSED");
  }
}

string Test::ableEnqueue5()
{
  cout<<"Enqueue 5 on empty queue then peekFront returns 5: ";
  if (my_Queue1.peekFront() == 5)
  {
    return ("PASSED");
  }
  else
  {
    return ("FAILED");
  }
}

string Test::correctEnqueue()
{
  cout<<"Enqueue a value to the right place of an existed Queue: ";
  if (my_Queue1.peekFront() == 5)
  {
    return ("PASSED");
  }
  else
  {
    return ("FAILED");
  }
}

/**********************************Dequeue*************************************/

string Test::dequeueThruRnTmEr()
{
  Queue q;
  cout<<"method dequeue() could throw exception on an empty Queue: ";
  try
  {
    q.dequeue();
  }
  catch(...)
  {
    return ("PASSED");
  }
  return ("FAILED");
}

string Test::ableDequeue()
{
  cout<<"Able to dequeue an one value queue to a empty queue: ";
  if (my_Queue2.isEmpty())
  {
    return ("PASSED");
  }
  else
  {
    return ("FAILED");
  }
}

string Test::correctDequeue()
{
  cout<<"Dequeue the value at the front of Queue: ";
  if (my_Queue3.peekFront() == 10)
  {
    return ("PASSED");
  }
  else
  {
    return ("FAILED");
  }
}

/**********************************peekFront*************************************/
string Test::ablePeekFront()
{
  cout<<"peekFront() returns the front value that is in the one value Queue : ";
  Queue q;
  q.enqueue(1);
  if (q.peekFront() == 1)
  {
    return ("PASSED");
  }
  else
  {
    return ("FAILED");
  }
}


string Test::correctPeekFront()
{
  cout<<"Returned the front value in the Queue correctly: ";
  if (my_Queue3.peekFront() == 5)
  {
    return ("PASSED");
  }
  else
  {
    return ("FAILED");
  }
}

string Test::peekFrontThruRnTmEr()
{
  cout<<"method peekFront() could throw exception on an empty Queue: ";
  Queue q;
  try
  {
    q.peekFront();
  }
  catch(...)
  {
    return ("PASSED");
  }
  return ("FAILED");
}

/**********************************memoryLeak*************************************/
string Test::MemoryLeak()
{
  cout<<"No memory leaks: ";
  return ("FAILED");
}
