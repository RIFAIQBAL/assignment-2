#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int n,i,k=0;
cout<<"enter any number";
cin>>n;
while(n>0){
k=n%10;
n=n/10;
if(k==0){
i++;
}
else if(k==1){
i++;
}
else if(k==2){
i++;
}
else if(k==3){
i++;
}
else if(k==4){
i++;
}
else if(k==5){
i++;
}
else if(k==6){
i++;
}
else if(k==7){
i++;
}
else if(k==8){
i++;
}
else if(k==9){ 
i++;
}
}
cout<<"the frequency of the digit is"<<n;
}
