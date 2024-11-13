// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int l = 0;
//     int h = n - 1;
//     while (l < h) {
//         if (arr[l] < 0) {
//             l++;
//         } else if (arr[h] > 0) {
//             h--;
//         } else {
//             swap(arr[l], arr[h]);
//         }
//     }

//     cout << "Modified array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



// int i;
//         int l =0;
//         int m=0;
//         int h = nums.size()-1;
//         while(m<=h){
//             if(nums[m]==0){
//                 swap(nums[l],nums[m]);
//                 l++,m++;
//             }
//             else if(nums[m]==1){
//                 m++;
//             }
//             else{
//                 swap(nums[m],nums[h]);
//                 h--;
//             }

//         }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>arr{1,0,1,0,0,1,1,0,1,0,1,1};
//     int start = 0;
//     int end = arr.size() -1;
//     int size = arr.size();
//     int i =0;
//     while(start<end){
//         if(arr[start] == 0){
//             start++;
//         }
//         else if(arr[end] == 1){
//             end--;
//         }
//         else{
//             swap(arr[start],arr[end]);
//         }
//     }
//     for(i =0 ; i<arr.size() ;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<size;
// }




// #include <iostream>
// #include <vector>
// using namespace std;

// void waveprintmatrix(vector<vector<int>> v) {
//     int m = v.size(); // number of rows
//     int n = v[0].size(); // number of columns

//     for (int startcol = 0; startcol < n; startcol++) {
//         if ((startcol & 1) == 0) {
//             for (int i = 0; i < m; i++) {
//                 cout << v[i][startcol] << " ";
//             }
//         } else {
//             for (int i = m - 1; i >= 0; i--) {
//                 cout << v[i][startcol] << " ";
//             }
//         }
//     }
//     cout << endl; // to ensure the output ends with a newline
// }

// int main() {
//     vector<vector<int>> v = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16},
//         {17, 18, 19, 20}
//     };

//     waveprintmatrix(v);

//     return 0;
// }


