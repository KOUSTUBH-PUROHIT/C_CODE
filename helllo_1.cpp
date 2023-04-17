#include<iostream>
#include<typeinfo>

using namespace std;

class school{
float fee;

float extra_tax;

public:
    int roll_no;
    int class_value;

void get_input(){
cout<<"Enter the value of fee"<<endl;
cin>>fee;

cout<<"Enter the value of extra tax"<<endl;
cin>>extra_tax;

cout<<"Enter the value of roll_no"<<endl;
cin>>roll_no;

cout<<"Enter the value of class"<<endl;
cin>>class_value;
};

void get_output(){

cout<<"The fee of the student is : "<<fee<<endl;

cout<<"The tax for the student is : "<<extra_tax<<endl;

cout<<"The roll number of the student is : "<<roll_no<<endl;

cout<<"The class of the student is : "<<class_value<<endl;

};

void get_fee() {
cout<<fee;
}

};

int main(){

school student_1;
school student_2;

student_1.get_input();
student_1.get_output();


student_1.roll_no = 211;
get_fee() = 345;
student_1.get_output();

 return 0;
}

