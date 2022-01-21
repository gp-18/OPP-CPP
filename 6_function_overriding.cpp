
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;
class Base
{
public:
  void message()
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
      Base::message();
  }
};
int main()
{
   Derived d1;
   d1.message();
    return 0;
}
