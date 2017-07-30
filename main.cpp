#include <iostream>
#include "Engine.pb.h"

using namespace std;

int main (int argc, const char * argv[]) 
{
  Engine engineMsg;
  bool on;
  engineMsg.set_on(on);
  std::string serializedOut; 
  std::cout << "serizalization result: " << engineMsg.SerializeToString(&serializedOut) << std::endl;
  // imagine some network tranfer here;
  Engine inMsg;
  std::cout << "deseriazation result: " << inMsg.ParseFromString(serializedOut);
  return 0;
}