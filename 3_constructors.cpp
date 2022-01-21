
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;
class House
{
    private:
    int length;
    int breath;
    public:
    House(int a=0,int b=0)
    {
        length=a;
        breath=b;
    }
    void message()
    {
        cout<<"This is my house\n";
    }
    void area()
    {
        cout<<length*breath;
    }
};
int main()
{
 House parth(18,19);
 parth.message();
 parth.area();

return 0;
}
