//Program to Convert Degrees Farenheit to Degrees Celcius
#include<iostream>
using namespace std;
int main()
{
float celcius,farenheit;
cout<<"Input Temperature in Farenheit : ";
cin>>farenheit;
celcius=(farenheit-32)*5/9;
cout<<"The Temperature in Celsius is:" <<celcius<<endl;
return 0;
}
