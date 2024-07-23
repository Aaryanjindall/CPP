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