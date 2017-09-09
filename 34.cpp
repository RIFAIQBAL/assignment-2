#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int num,swappedNum;
int firstDigit,lastDigit,digits;
double q;
cout<<"Enter any number: ";
cin>>num;
lastDigit=num%10;
digits=log10(num);
q=digits; 
firstDigit=num/pow(10,q);
swappedNum=lastDigit;
swappedNum=swappedNum*pow(10,q);
swappedNum+=num % pow(10,q);
swappedNum-=lastDigit;
swappedNum+=firstDigit;
cout<<"Original number = "<<num;
cout<<"Number after swapping first and last digit: "<<swappedNum;
return 0;
}
