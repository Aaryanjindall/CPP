// #include<bits/stdc++.h>
// using namespace std;
// class Employee
// {
//     private:
//     int a,b,c;
//     public:
//     int d,e;
//     void setdata(int a1, int b1, int c1);
//     void getdata(){
//         cout<<"the value of a is "<<a<<endl;
//         cout<<"the value of b is "<<b<<endl;
//         cout<<"the value of c is "<<c<<endl;
//         cout<<"the value of d is "<<d<<endl;
//         cout<<"the value of e is "<<e<<endl;
//     }
     
// };
// void Employee :: setdata(int a1 , int b1 , int c1){
//     a = a1;
//     b = b1;
//     c = c1;

// }
// int main(){
//     Employee harry;
//     harry.d = 34;
//     harry.e = 89;
//     harry.setdata(1,2,4);
//     harry.getdata();
//     return 0;

// }




// #include<bits/stdc++.h>
// #include<string.h>
// using namespace std;


// class teacher{
// private:
//     double salary;
// public:
//     string name;
//     string dept;
//     string subject;
//     // // teacher(){
//     //     dept = "computer science";
//     // }
//     teacher(string name , string dept , string subject , double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }
//     teacher(teacher &orgObj){
        
//     }

//     //member functions
//     // void changeDept(string newDept){
//     //     dept = newDept;
//     // }


// // //setter
// //     void setsalary(double s){
// //         salary = s;
// //     }
// // // getter
// //     void getsalary(){
// //     cout<<salary;
// // }
// void getinfo(){
//     cout<<"name: "<<name<<endl;
//     cout<<"subject "<<subject<<endl;
// }

// };


// int main(){
//     teacher t1("Shraddha","computer science","c++",25000 );
//     t1.getinfo();
//     teacher t2(t1);
//     t2.getinfo();



// }



// #include <iostream> 
// using namespace std; 
// // Function to change value of x 
// int fun(int x) 
// { 
// x += 1; 
// return x; 
// } 
// // Driver Code 
// int main() 
// { 
// int x = 3; 
// cout << "Value of X before modifying: " << x << endl; 
// int u = fun(x); 
// cout << "Value of X after modifying: " << u << endl; 
// return 0; 
// } 



#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rno;
    float gpa;
   


};
int main(){
    Student S1;
    S1.name = "raghav Garg";
    S1.rno = 76;
    S1.gpa = 8.2;
    cout<<S1.name<<" "<<S1.gpa<<" "<<S1.rno<<endl;


}