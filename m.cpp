#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,d;
cout<<"enter principle";
cin>>a;
cout<<"enter rate";
cin>>b;
cout<<"enter time";
cin>>c;
d=a*pow((1+b/100),c)-a;
cout<<"compound interest is"<<d;
}
