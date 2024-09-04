// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int row = 0 ; row<3 ; row++){
//         for(int col = 0 ; col<5 ; col++ ){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row = 0 ; row<n ; row++){
//         for(int col = 0 ; col<n ; col++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }

// }



// #include<iostream>
// using namespace std;
// int main(){
//     for(int row = 0 ; row<3 ; row++){
//         if(row == 0 || row == 2){
//             for( int col = 0 ;col<5 ; col++){
//                 cout<<"* ";
//                 }
//         }
//         else{
//             cout<<"* ";
//             for(int col = 0 ; col<3 ; col++){
//                 cout<<"  ";
//             }
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     int m ; 
//     cin>>n;
//     cin>>m;
//     for(int row = 0 ; row<n ; row++){
//         if(row == 0 || row == n-1){
//             for(int col = 0 ; col<m ; col++){
//                 cout<<"* ";

//             }
//         }
//         else{
//             cout<<"* ";
//             for(int j = 0 ; j<m-2 ; j++){
//                 cout<<"  ";

//             }
//             cout<<"* ";

//         }
//         cout<<endl;
//     }

// }




// #include<iostream>
// using namespace std;
// int main(){
//      int n ;
//      cin>>n;
//      for(int row = 0 ; row<n ; row++){
//         for(int col = 0 ; col<row+1 ; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//      }
// }



// #include<iostream>
// using namespace std;
// int main(){ 
//      int n ;
//      cin>>n;
//      for(int row = 0 ; row<n ; row++){
//         for(int col = 0 ; col<n-row ; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//      }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n ; 
//     cin>>n;
//     for(int row = 0 ; row<n ; row++){
//         for( int col= 0  ; col<row+1 ; col++){
//             cout<<col+1;
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n ; 
//     cin>>n;
//     for(int row = 0 ; row<n ; row++){
//         for( int col = 0; col<n-row ; col++){
//             cout<<col+1;
//         }
//         cout<<endl;
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row = 0 ; row<n ; row++){
//         for(int col = 0 ; col<n ; col++){
//             if(col == 0 || row == 0 || row == n-col-1 ){
//                 cout<<"* ";

//             }
//             else{
//                 cout<<"  ";
//             }

//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int row = 0 ; row<n ; row++){
//         int k =0;
//         for(int col = 0 ; col<(2*n)-1 ; col++){
//             if(col < n-row-1){
//                 cout<<"  ";;
//             }
//             else if(k < 2*row+1 ){
//                 if(k == 0 || k == 2*row || row == n-1){
//                     cout<<"* ";
//                 }
//                 else{
//                     cout<<"  ";
//                 }
//                 k++;

                
//             }
//             else{
//                 cout<<"  ";
//             }
            
            
//         }
//         cout<<endl;
        

//     }
// }




// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for (int row = 0; row < n; row++) {
//         for (int col = 0; col < n; col++) {
//             if (col < n - row - 1) {
//                 cout << " ";  // print leading spaces
//             } else {
//                 cout << "* ";  // print asterisks followed by a space
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     for(int row = 0 ; row<n ; row++){
//         for(int col = 0 ; col<n ; col++){
//             if(col<row){
//                 {
//                     cout<<" ";
//                 }

//             }
//             else{
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n ;
//     for(int row = 0 ; row<n ; row++){
//         for(int col = 0 ; col<row+1 ; col++){
//             cout<<row+1;
//             if(col != row){
//                 cout<<"*";
//             }
            
//         }
//         cout<<endl;
//     }
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n ;
//     for(int row = 0 ; row<n ; row++){
//         for(int col = 0 ; col<row+1 ; col++){
//             cout<<row+1;
//             if(col != row){
//                 cout<<"*";
//             }
            
//         }
//         cout<<endl;

        
//     }

   
//     for(int row = 0 ; row<n ; row++){
//         for(int col = 0 ; col<n-row ; col++){
//             cout<<n-row;
//             if(col != n-row-1){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
    
// }




#include<iostream>
using namespace std;
int main(){}



