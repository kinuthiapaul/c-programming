//implementing a class named addition with three intergers
#include <iostream>
using namespace std;
class addition{
    public:
    int a=22,b=30,c=50;//data members
    int product()//member function
    {
        return(a*b*c);
    }
};
int main(){
    addition addition1;// creating object of Room class
    int  a,b,c,product,addition;
    // assigning values to data members
    a=addition1.a=22;
    b=addition1.b=30;
    c=addition1.c=50;
    product=addition1.a*b*c;
    cout<<"product is:"<<product<<endl;
    return 0;
}
 
