
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    public:
    A(int x=0)
    {
        a=x;
    }
    friend void fun();
};

class B
{
    private:
    int b;
    public:
    B(int x=0)
    {
        b=x;
    }
    friend void fun();
};
void fun()
{
    A a1(18);
    B b1(19);
    int x=a1.a+b1.b;
    cout<<x<<endl;
    
}
int main()
{
    cout<<"Welcome to Online IDE!! Happy Coding :)\n";
    fun();
    return 0;
}
