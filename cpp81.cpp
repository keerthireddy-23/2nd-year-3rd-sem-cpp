#include<iostream> 
using namespace std; 
class student{ 
private: 
string name; 
int age; 
public: 
void setdata(string n,int a){ 
name=n; 
age=a; 
} 
void display(){ 
cout<<"Name:"<<name<<",Age:"<<age<<endl; 
} 
}; 
int main(){ 
student s1; 
s1.setdata("Dinesh",20); 
s1.display(); 
student*ptr; 
ptr=&s1; 
ptr->display(); 
student *ptr2=new student; 
ptr2->setdata("Charan",22); 
ptr2->display(); 
delete ptr2; 
return 0; }
