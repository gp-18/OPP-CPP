
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;
class House
{
    private:
    
    int length;
    int breath;
    public:
    void set(int a,int b)
    {
        length=a;
        breath=b;
    }
    void message()
    {
        cout<<"This is my house\n";
    }
    void get()
    {
        cout<<length*breath;
    }
};
int main()
{
 House parth;
 parth.set(18,19);
 parth.message();
 parth.get();

    return 0;
}
