// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr;
//     cout<<arr.size()<<endl;
//     cout<<arr.capacity()<<endl;
//     arr.push_back(5);
//     arr.push_back(6);
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// arr.pop_back();
// for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// int n;
// cout<<"ENTER THE VALUE OF N";
// cin>>n;

// vector <int> brr(n,-1);
// for(int i=0; i<brr.size(); i++){
//     cout<<brr[i]<<" ";


// }
// cout<<endl;


// vector <int> crr{10,20,30,40};
// for(int i=0; i<crr.size(); i++ ){
//     cout<<crr[i]<<" ";
// }
// cout<<endl;

//  cout<<crr.empty();



// }

// #include<bits/stdc++.h>
// using namespace std;
// int findunique(vector<int>arr){
//     int ans = 0;
//     for(int i =0;i<arr.size();i++){
//         ans  = ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     vector<int>arr{1,2,4,2,1,3,6,5,5,6,4};
//     int uniqueelements = findunique(arr);
//     cout<<uniqueelements<<endl;

// }


  
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[] = {1,2,3,10,5};
// int sizea = 5;
// int brr[] = {6,7,8,9};
// int sizeb = 4;

// vector<int>ans;
// for(int i = 0;i<sizea; i++){
//     ans.push_back(arr[i]);

// }

// for(int i = 0;i<sizeb; i++){
//     ans.push_back(brr[i]);

// }
// cout<<"PRINTING ALL ELEMENTS"<<endl;
// for(int i = 0;i<ans.size(); i++){
//     cout<<ans[i]<<" ";
//     }

// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      vector<int>arr{1,2,3,4,6,8};
//      vector<int>brr{3,49,10};
//      vector<int>ans;
//      for(int i=0;i<arr.size();i++){
//         int element = arr[i];
//         for(int j = 0; j<brr.size();j++){
//             if(element == brr[j]){
//                 ans.push_back(element);
//             }
//         }
        
//     }
//     for(auto value: ans){
//         cout<<value<<" ";

//     }
//     cout<<endl;


// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>arr{1,3,5,7,9};
//     vector<int>brr;
//     for(int i =0 ;i<arr.size();i++){
//         int element = arr[i];
//         for(int j = i+1;j<arr.size();j++){
            
            
//             if(element + arr[j] == 10){
//                 cout<<"("<<element<<","<<arr[j]<<")"<<endl;
            
//             }

//         }

//     }
    

// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER NUMBER ";
//     cin>>n;
//     vector<int>arr(n);
//     for(int i =0;i<arr.size();i++){
//         cin>>arr[i];
//     }
//     for(int i = 0 ; i < arr.size();i++){
//         int element = arr[i];
//         for(int j = i+1 ; j < arr.size();j++){
//             int element2 = arr[j];
//             {
//                 for(int k = j+1 ; k < arr.size();k++){
//                     if(element + element2 + arr[k] ==80){
//                         cout << element <<"," << element2 <<","<<arr[k]<<endl;
//                     }
                    
//                 }

//             }
//         }
//     }
    

// }



