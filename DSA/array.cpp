// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[7];
//     cout<<"array created succefully"<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[10];
//     cout<<"enter the input values in array"<<endl;
//     for(int i =0;i<10;i++){
//         cin>>arr[i];
//     }
//     cout<<"printing the values in array"<<endl;
//     for( int i=0;i<10;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
     
    
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5];
//     int i;
//     for(i=0;i<5;i++){
//         cout<<"ENTER ELEMENT";
//         cin>>arr[i];

//     }
//     for(i=0;i<5;i++){
//         cout<<arr[i]*2<<endl;
///     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void printarray(int arr[],int size){
//     for(int i =0;i<size;i++){
//         cout<<arr[i]<<"   ";
//     }
//     cout<<endl;
// }
// void inc(int arr[], int size){  
//      arr[0] = arr[0]+10;
//      printarray(arr,size);
    
// }
// int main(){
//     int arr[] = {5,6};
//     int size = 2;
//     inc(arr,size);
//     printarray(arr,size);
//     return 0;

// }




// #include<bits/stdc++.h>
// using namespace std;
// bool find(int arr[],int size , int key){
//     for(int i = 0;i<size;i++){
//         if(arr[i] == key){
//             return true;
//         }
        
//     }
//     return false;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;
//     cout<<"ENTER THE KEY TO FIND"<<endl;
//     int key;
//     cin>>key;
//     if(find(arr, size,key)){
//         cout<<"found"<<endl;

//     }
//     else{
//         cout<<"not found"<<endl;
//     }
//     return 0;

// }



//  #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[] = {1,1,0,1,0,0,0,1,0,1,1,1,1,0,1};
// int size = 15;
// int numzero = 0;
// int numone = 0;
// for(int i = 0;i<size;i++){
//     if(arr[i] == 0){
//         numzero++ ;

//     }
//     else if(arr[i] == 1){
//         numone++;
//     }
//     else{
//         cout<<"UNIQUE NUM "<<endl;
//     }
// }
// cout<<"NUM OF ZEROES "<<numzero<<endl;
// cout<<"num of ones "<<numone<<endl;
// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int i;
//     int arr[10];
//     cout<<"ENTER NUMBER ";
//     for(i=0;i<10;i++){
//         cin>>arr[i];
//     }
//     cout<<"REVERSE ARRAY IS "<<endl;
//     for(i=9;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5];
//     int i;
//     cout<<"ENTER NUMBER "<<endl;
//     for(i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     int mini = arr[0];9
//     for(i=0;i<5;i++){
//         if(mini>arr[i]){
//             mini = arr[i];
//         }


//     }
//     cout<<"minimum number is "<<mini;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number ";
//     cin>>n;
    
//     int arr[n];
//     for(int i = 0;i<n;i++ ){
//         cin>>arr[i];
//     }
//     int end = n-1;
//     for(int start = 0; start<=end ; start++ ){
//         if(start == end){
//             cout<<arr[start]<<" ";
//             break;
//         }
//         cout<<arr[start]<<" ";
//         cout<<arr[end]<<" ";
        
//         end--;
//     }
// }
