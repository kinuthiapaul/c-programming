//program to implement single inheritance
 #include<iostream>
 using namespace std;
 //Base class
 class teacher{
     public:
     void teach(){
         cout<<"I can teach"<<endl;
     }
     void write(){
         cout<<"I can write"<<endl;
     }
 };
 //Derived class
 class student:public teacher{
 public:
 void read(){
     cout<<"I can read"<<endl;
 }
 };
 int main(){
     //Creat object of the sudent class
     student student1;
     //calling members of the base class
     student1.teach();
     student1.write();
     //calling member of the derived class
     student1.read();
     return 0;
 
 }
