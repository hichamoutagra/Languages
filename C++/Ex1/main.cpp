#include <iostream>

using namespace std;

int main()
{
   int press=1;
   float temp;
   float res;
   cout<<"Press 1 to convert Fahrenheit to Celsius"<<endl;
   cout<<"Press 2 to convert Celsius to Fahrenheit"<<endl;
   cout<<"Enter your option: ";
   cin>>press;
   if (press == 1){
    cout<<"Enter temperature in Fahrenheit : ";
    cin>>temp;
    res = (temp-32)*(5./9.);
    cout<<"In Celsius that's : "<<res<<endl;
   }else{
    cout<<"Enter temperature in Celsius : ";
    cin>>temp;
    res = (temp*(9./5.))+32;
    cout<<"In Fahrenheit that's : "<<res<<endl;
   }



}
