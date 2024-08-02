// #include<bits/stdc++.h>
// using namespace std;
// float circle_area(float radius){
//     float area = 3.14*radius*radius;
//     return area;
// }
// int main(){
//     float radius ;
//     cout<<"ENTER RADIUS "<<endl;
//     cin>>radius;
//     float areacal = circle_area(radius);
//     cout<<areacal<<endl;

// }




// #include<bits/stdc++.h>
// using namespace std;
// bool checkeven( int n ){
//     if(n%2 == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     bool iseven = checkeven(n);
//     if(iseven){
//         cout<<"NUMBER IS EVEN";

//     }
//     else{
//         cout<<"NUMBER IS ODD";
//     }
// }





// #include<bits/stdc++.h>
// using namespace std;
// long long int calfact(long long int n){
//     long long int fact = 1;
//     for(int i = 1 ; i <= n ; i++){
//         fact = fact * i;
        


//     }
//     return fact;
// }

// int main(){
//     int n ;
//     cin>>n;
//     long long int facte = calfact(n);
//     cout<<facte<<endl;

// }



// #include<bits/stdc++.h>
// using namespace std;
// bool findprime ( long long int n){
//     if(n<=1)return false;
    
//     int count = 0 ;
//     for(int i = 1 ; i <= n ; i++){
//         if(n%i == 0){
//             count++;
            
//         }

//     }
//     if(count == 2){
//         return true;
//     }
//     else{
//     return false;
//     }
// }
// int main(){
//      long long int n;
//     cin>>n;
//     if(findprime(n)){
//         cout<<"prime";

//     }
//     else{
//         cout<<"NOT PRIME";
//     }
// }




// #include<iostream>
// using namespace std;
// bool checkprime(int n){
//     if(n<=1){
//         return false;
//     }
//     int count = 0;
//     for(int i = 1 ; i<=n ; i++){
//         if(n%i == 0 ){
//             count++;
//         }
//     }
//     if(count == 2){
//         return true;
//     }
//     else{
//         return false;
//     }

// }
// int main(){
//     int n ;
//     cin>>n;
//     for(int i = 100 ; i<=n ; i++){
//         if(checkprime(i)){
//             cout<<i<<" ";
//         }
//     }
// }


#include<iostream>
#include<cmath>
using namespace std;
int setk(int number,int bit){
    int binary[32];
    int x;
    int i=0;
    while(number>0){
        x=number%2;
        binary[i]=x;
        number=number/2;
        i++;
    }
    if(binary[bit-1]==0){
binary[bit-1]=1;
    }
     if(binary[bit-1]==1){
        binary[bit-1]=0;
     }
     x=0;
     for(int j=0;j<i;j++){
        x=x+binary[j]*pow(2,j);
     }
     cout<<x;

}
int main(){
int number,k;
cin>>number>>k;
setk(number,k);

}