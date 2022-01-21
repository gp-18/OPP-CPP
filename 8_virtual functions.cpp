
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;
class Base
{
public:
 virtual void message()
  {
      cout<<"this is the base class message\n";
  }
};
class Derived:public Base
{
public:    
  void message()
  {
      cout<<"this is the Derived class message\n";
  }
};
int main()
{
    Base *ptr;
    ptr=new Derived();
    ptr->message();
    return 0;
}
