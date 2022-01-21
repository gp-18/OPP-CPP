
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;
void message(int n)
{
    cout<<"i will return the int value :"<<n<<endl;
}

void message(double m)
{
    cout<<"i will return the double value :"<<m<<endl;
}

void message(int n, double m)
{
    cout<<"i will return the both int and double value :"<<n<<" "<<m<<endl;
}
int main()
{
    
int n;
cin>>n;
double m;
cin>>m;
message(n);
message(m);
message(n,m);
return 0;
}
