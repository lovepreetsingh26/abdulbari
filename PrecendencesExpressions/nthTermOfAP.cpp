#include<iostream>
using namespace std;

int main()
{
    int a,d,n ,t;
    cout<<"Enter the value of a ,d ,n  \n";
    cin>>a>>d>>n;
    t = a + (n-1)*d;
    cout<<"the "<<n<<" term is of an AP is "<<t;
    return 0;
}