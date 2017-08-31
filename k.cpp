#include<iostream>
using namespace std;
int main()
{
float a,b,c,d,e,f,g,h;
cout<<"enter mark of biology";
cin>>a;
cout<<"enter mark of maths";
cin>>b;
cout<<"enter mark of physics";
cin>>c;
cout<<"enter mark of chemistry";
cin>>d;
cout<<"enter mark of english";
cin>>e;
f=a+b+c+d+e;
g=f/5;
h=(f/500)*100;
cout<<"average="<<g;
cout<<"total="<<f;
cout<<"percentage="<<h;
}
