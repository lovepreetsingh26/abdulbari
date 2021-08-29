#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,x;
    cout<<"************ROOT OF QUADRATIC EXPRESSIONS***************** \n \n \n";
    cout<<"Enter the value of a ,b ,c \n";
    cin>>a>>b>>c;
    x= (-b + sqrt(b*b - 4*a*c))/(2*a);
    cout<<"Root of Quadratic Equation is "<<x;

    return 0;

}