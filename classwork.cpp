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



#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 2;
    int *ptr = &x;
    cout<<ptr;
    cout<<*ptr;
}
