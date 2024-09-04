// #include<stdio.h>
// int main(){
//     printf("HELLO WORLD ");
//     return 0;
    
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
    
//     cin>>marks;
//     if(marks>=90){
//         cout<<"A+";

//     }
//     else if(marks>=80){
//         cout<<"A";

//     }
//     else if(marks>=70){
//         cout<<"B+";

//     }
//     else if(marks>=60){
//         cout<<"B";
//     }
//     cout<<endl;
//     cout<<"your grade is: " << marks <<endl;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i;
//     int n;
//     int count =0;
//     cin
//     cin>>n;
//     for(i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }



//     }
//     if(count ==2 ){
//         cout<<"prime";

//     }
//     else{
//         cout<<"not prime";
//     }

    


    
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int i , sum =0;

//     cout<<"enter the number ";
//     cin>>n;

//     for(i=0;i<=n;i++){
//         sum = sum + i;
//         cout<<i;
//         cout<<endl;
//     }
//     cout<<sum;


// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n ;
//     int i;
//     int fact = 1;
//     cout<<"ENTER THE NUMBER ";
//     cin>>n;
//     for(i=n;i>0;i--){
//         fact = fact*i;
//     }
//     cout<<fact;

// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i;
//     int n;
//     cout<<"enter no. of rows: ";
//     cin>>n;
//     for(i=1;i<=n;i++){
        
//         for(int j = 0;j<=2*n;j++){
//             if(j>n-i && j<n+i){
//                 cout<<"1";
//             }
//             else{
//                 cout<<" ";
//             }


//         }
//         cout<<endl;

//     }


// }



// #include<bits/stdc++.h>
// using namespace std;
// int facto(int n){
//     if(n == 1){
//         return 1;
//     }
//     else if( n == 2){
//         return 2;
//     }
//     else{
//         return n
//     }
 // }

 
// #include<bits/stdc++.h>
// using namespace std;
// class student{
//     public:
//     float height;
//     int data;

// };
// int main(){
//     student s1;
//     s1.data = 20;
//     s1.height = 5.6;
//     cout<<s1.data;
// }





// #include<bits/stdc++.h>
// using namespace std;
// class student{
//     public:
//     student(){
//         int n;
//         cin>>n;
//         int ans=0;
//         while(n){
//             ans=ans*10+n%10;
//             n/=10;
//         }
//         cout<<ans<<endl;
//     };
    


// };
// int main(){
//     student s1;
// }



// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     int length;
//     int breadth;

// public:
//     void setDimensions(int l, int b) {
//         length = l;
//         breadth = b;
//     }

 
//     int calculateArea() {
//         return length * breadth;
//     }


//     int calculatePerimeter() {
//         return 2 * (length + breadth);
//     }
// };

// int main() {
//     Rectangle rect;
//     int length, breadth;

//     cout << "ENTER LENGTH: ";
//     cin >> length;

//     cout << "ENTER BREADTH: ";
//     cin >> breadth;

//     rect.setDimensions(length, breadth);

   
// }



// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     int length;
//     int breadth;

// public:
//     // Constructor to initialize length and breadth
//     Rectangle(int l, int b) {
//         length = l;
//         breadth = b;
//     }

//     // Function to calculate area
//     int calculateArea() {
//         return length * breadth;
//     }

//     // Function to calculate perimeter
//     int calculatePerimeter() {
//         return 2 * (length + breadth);
//     }
// };

// int main() {
//     int length, breadth;

//     cout << "ENTER LENGTH: ";
//     cin >> length;

//     cout << "ENTER BREADTH: ";
//     cin >> breadth;

//     // Create a Rectangle object with the provided dimensions
//     Rectangle rect(length, breadth);

//     // Calculate and display area and perimeter
//     cout << "Area: " << rect.calculateArea() << endl;
//     cout << "Perimeter: " << rect.calculatePerimeter() << endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     int length;
//     int breadth;

// public:
//     // Constructor to initialize length and breadth
//     Rectangle(int l, int b) {
//         length = l;
//         breadth = b;
//     }

//     // Function to calculate area
//     int calculateArea() {
//         return length * breadth;
//     }

//     // Function to calculate perimeter
//     int calculatePerimeter() {
//         return 2 * (length + breadth);
//     }

//     // Destructor (no explicit cleanup needed in this case)
//     ~Rectangle() {
//         // Optionally, you can add cleanup code here if necessary
//         cout << "Rectangle object destroyed." << endl;
//     }
// };

// int main() {
//     int length, breadth;

//     cout << "ENTER LENGTH: ";
//     cin
// }


// #include<iostream>
// int main(){
//     string s[] = "abcdianjyp";
//     for(int i = 0 ; i <s.size(); i++){
//         if(s[i] == "i"){
            
//             cout<<i<<endl;
//         }
//     }
// }



// #include <iostream>
// #include <string>

// int main() {
//     std::string s = "abcdianjyp";
//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] == 'i') { 
//             std::cout << i;
//         }
//     }
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 1, 0, 1, 1, 1, 0, 0, 1, 1, ,1,1, 0, 0, 0, 0};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int maxConsecutiveOnes = 0;
//     int currentConsecutiveOnes = 0;

//     for (int i = 0; i < size; i++) {
//         if (arr[i] == 1) {
//             currentConsecutiveOnes++;
//         } else {
//             currentConsecutiveOnes = 0;
//         }

//         if (currentConsecutiveOnes > maxConsecutiveOnes) {
//             maxConsecutiveOnes = currentConsecutiveOnes;
//         }
//         // cout<<currentConsecutiveOnes<<endl;
//     }

//     cout << "Maximum number of consecutive ones: " << maxConsecutiveOnes << endl;

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 1, 0, 1, 1, 1, 0, 0, 1 , 1 , 1 , 1 , 0, 0, 0, 0};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int maxConsecutiveOnes = 0;
//     int currentConsecutiveOnes = 0;

    // for (int i = 0; i < size; i++) {
    //     if (arr[i] == 1) {
    //         currentConsecutiveOnes++;
    //     } else {
    //         currentConsecutiveOnes = 0;
    //     }

    //     if (currentConsecutiveOnes > maxConsecutiveOnes) {
    //         maxConsecutiveOnes = currentConsecutiveOnes;
    //     }

    // }

    // cout << "Maximum number of consecutive ones: " << maxConsecutiveOnes << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class students {
// private:
//     string name;
//     int id;
//     int arr[5];
//     int total = 0;

// public:

//     students() {
//         cout << "Input name and ID: ";
//         cin >> name >> id;

//         for (int i = 0; i < 5; i++) {
//             cout << "Enter the marks " << i + 1 << ": ";
//             cin >> arr[i];
//             total += arr[i];
//         }
//         cout << "Average marks: " << total / 5 << endl;
//     }

   
//     ~students() {
//         cout << "Student object destroyed." << endl;
//     }
// };

// int main() {
//     students aaryan;
//     return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;

// class students {
// private:
//     string name;
//     string id;
//     int grades[5];

// public:
//     // Constructor to initialize the name
//     students(string studentName) {
//         name = studentName;
//     }

//     // Method to set the ID
//     void setID(string studentID) {
//         id = studentID;
//     }

//     // Method to set grades
//     void setGrades(int gradeArray[5]) {
//         for (int i = 0; i < 5; i++) {
//             grades[i] = gradeArray[i];
//         }
//     }

//     // Method to calculate and return the average grade
//     double averageGrade() {
//         int total = 0;
//         for (int i = 0; i < 5; i++) {
//             total += grades[i];
//         }
//         return static_cast<double>(total) / 5;
//     }

//     // Method to print student details
//     void printDetails() {
//         cout << "Name: " << name << ", ID: " << id << ", Average Grade: " << averageGrade() << endl;
//     }
// };

// int main() {
    
//     students student1("Arun");
//     student1.setID("S12345");
//     int grades[5] = {85, 90, 78, 92, 88};
//     student1.setGrades(grades);
//     student1.printDetails();
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 0, 0, 0};
//     int sizea = 6;
//     int brr[] = {2, 5, 6};
//     int sizeb = 3;
//     int j = 0; 

//     for (int i = 0; i < sizea; i++) {
//         if (arr[i] == 0 && j < sizeb) {
//             arr[i] = brr[j];
//             j++;
//         }
//     }

//     for (int i = 0; i < sizea; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     for(int i = 0 ; i<sizea ; i++){
        
        
//     }


//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,-2,1,4,-5,0};
    for(int i = 0; i<6 ;i++ ){
        for
    }

}
