// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[3][3];

//     for(int i =0;i<3;i++){
//         for(int j =0;j<3;j++){
//             cout<<"ENTER THE NUMBER";
//             cin>>arr[i][j];
//         }
//     }
//     for(int i =0;i<3;i++){
//         cout<<endl;
//         for(int j =0;j<3;j++){
//             cout<<arr[i][j]<<" ";
            
//         }

//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[3][3] ={
//     {1,2,3},
//     {4,5,6},
//     {2,4,8}
//     };

//     for(int i =0;i<3;i++){
//         cout<<endl;
//         for(int j =0;j<3;j++){
//             cout<<arr[j][i]<<" ";
            
//         }

//     }
// }


// #include<bits/stdc++.h>
// using namespace std;

// // Function to print row-wise sum and return the total sum
// int printrowwisesum(int arr[][3], int rows, int cols) {
//     int total_sum = 0;
//     for (int i = 0; i < rows; i++) {
//         int row_sum = 0;
//         for (int j = 0; j < cols; j++) {
//             row_sum += arr[i][j];
//         }
//         cout << "Sum of row " << i + 1 << " is: " << row_sum << endl;
//         total_sum += row_sum;
//     }
//     return total_sum;
// }

// int main() {
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     cout << "Enter the elements of the array:" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     int summation = printrowwisesum(arr, rows, cols);
//     cout << "Total sum is: " << summation << endl;

//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;

// // Function to print column-wise sum and return the total sum
// int printcolwisesum(int arr[][3], int rows, int cols) {
//     int total_sum = 0;
//     for (int j = 0; j < cols; j++) {
//         int col_sum = 0;
//         for (int i = 0; i < rows; i++) {
//             col_sum += arr[i][j];
//         }
//         cout << col_sum << endl;
//         total_sum += col_sum;
//     }
//     return total_sum;
// }

// int main() {
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     cout << "Enter the elements of the array:" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     int summation = printcolwisesum(arr, rows, cols);
//     cout << "Total sum is: " << summation << endl;

//     return 0;
// }




#include <iostream>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key, int &row, int &col) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == key) {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Enter number: ";
            cin >> arr[i][j];
        }
    }

    int key;
    cout << "Enter key to find: ";
    cin >> key;
    int foundRow, foundCol;
    if (findKey(arr, rows, cols, key, foundRow, foundCol)) {
        cout << "Key found at [" << foundRow << "][" << foundCol << "]" << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3];
//     int i, j;
    
//     for(i = 0 ; i<3; i++){
//         for(j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int max = arr[0][0];
//     int min = arr[0][0];
//     for(i = 0 ; i<3; i++){
//         for(j=0;j<3;j++){
//             if(arr[i][j] > max){
//                 max = arr[i][j];
                

//             }
//         }
//     }
//     for(i = 0 ; i<3; i++){
//         for(j=0;j<3;j++){
//             if(arr[i][j] < min){
//                 min = arr[i][j];

//             }
//         }
//     }
//     cout<<max<<endl;
//     cout<<min<<endl;




// }


// this is only for 3 * 3 matrix 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[3][3];
//     for(int i = 0 ; i<3; i++){
//         for(int j = 0; j<3 ; j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i = 0 ; i< 3 ; i++){
//         cout<<endl;
//         for(int j = 0 ; j < 3 ; j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
    
//     cout<<endl<<"TRANSPOSED MATRIX IS :"<<endl;
//     for(int i = 0 ; i < 3 ; i ++){
//         cout<<endl;
//         for(int j= 0 ; j<3 ; j++){
//             cout<<arr[j][i]<<" ";
//         }
//     }
// }

