// programm to calculate net bonus amount of employee 
#include <iostream>
using namespace std;
int main()
{
    float salary,bonus;
    int time ;
    cout<<"Enter your salary"<<endl;
    cin>>salary;
    cout<<"Enter time of perid of service";
    cin>>time;
    if(time>10)
    {
        bonus=salary*10.0/100.0;
    }
    else if(time>=6&time<=10)
    {
        bonus=salary*8.0/100.0;
    }
    else if(time<6)
    {
        bonus=salary*5.0/100.0;
    }
  
  cout<<"Net bonus amount of empolyee="<<bonus;
  
    return 0;
}
