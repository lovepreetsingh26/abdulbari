#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"************SPEED************ \n";
    int v,u,a,s;

    cout<<"Enter the value of v,u and a \n";
    cin>>v>>u>>a;
    s=pow(v,2)-pow(u,2)/(2*a);
    cout<<"the speed of particle is "<<s;
    return 0;
}