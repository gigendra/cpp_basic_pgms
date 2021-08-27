//exception handling

#include <iostream>
using namespace std;
void division()
{
    int a,b,c;
    cout<<"enter dividend \n";
    cin>>a;
    cout<<"enter divisor \n";
    cin>>b;
    if(b!=0)
    {
        c=a/b;
        cout<<"quotient is "<<c<<"\n";
        exit(0);
    }
    else{
        throw(c);
    }
}
int main()
{
    try
    {
        division();
    }
    catch(int i)
    {
        cout<<"caught an exception,division by zero"<<"\n";
    }
    return 0;
}
