//programm to print even numbers using while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1,n,even=0,odd=0;
    cout<<"Enter the Ending value:";
    cin>>n;
    cout<<"Even numbers:";
    while(i<=n)
    {
        if(i%2==0)
        {
            cout<<"\n"<<i;
            even++;
        }
        i++;

    }
    
    return 0;
}
