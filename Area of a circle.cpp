//Finding area of circle using a function
#include <iostream>
using namespace std;
float circle(int r);//Function Prototype
int main() {
    int radius;
    float area;
    cout<<"Enter Radius"<<endl;
    cin>>radius;
    area=circle(radius);//function calling
    cout<<"The area is "<<area<<endl;
    return 0;}
    float circle(int r){//function definition
        float area;
        area=3.142*r*r;
    return area;
}
