// #include<iostream>
// using namespace std;
// int binarysearch(int arr[], int size , int target){
//         int s = 0 ;
//         int e = size - 1;
//         int mid = (s+e)/2;

//         while(s<=e){
//             int element = arr[mid];

//             if(element == target){
//                 return mid;
//             }
//             else if(target<element){
//                 e = mid - 1;
//             }
//             else{
//                 s = mid + 1;
                
//             }
//             mid = (s+e)/2;
//         }
//         return -1;
        
//     }
// int main(){
//     int arr[] = {2,4,6,8,10,12,14,16,18};
//     int size = 9;
//     int target = 6;
//     int indexoftarget = binarysearch(arr,size,target);
//     if(indexoftarget == -1){
//         cout<<"target not found" << endl;
//     } 
//     else{
//         cout<<"target found at "<<indexoftarget<<endl;
//     }
//     return 0;
    
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int firstoccurence( vector<int> v , int target){
//     int s = 0;
//     int e = v.size() - 1;

//     int mid = (s+e)/2;
//     int ans = -1;

//     while(s<=e){
//         if(v[mid] == target){
//             ans = mid;
//             e = mid - 1;

//         }
//         else if(target>v[mid]){
//             s = mid +1;

//         }
//         else if(target<v[mid]){
//             e = mid -1;

//         }
//         mid = (s+e)/2;
        
//     }
//     return ans;

// }
// int main(){
//     vector<int> v{1,2,3,4,4,4,4,6,7};
//     int target = 4;
//     int index = firstoccurence(v,target);
//     cout<<index<<endl;


// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int lastoccurence( vector<int> v , int target){
//     int s = 0;
//     int e = v.size() - 1;

//     int mid = (s+e)/2;
//     int ans = -1;

//     while(s<=e){
//         if(v[mid] == target){
//             ans = mid;
//             s = mid + 1;

//         }
//         else if(target>v[mid]){
//             s = mid +1;

//         }
//         else if(target<v[mid]){
//             e = mid -1;

//         }
//         mid = (s+e)/2;
        
//     }
//     return ans;
    


// }
// int main(){
//     vector<int> v{1,2,3,4,4,4,4,6,7};
//     int target = 6;
//     int index = lastoccurence(v,target);
//     cout<<index<<endl;


// }



// #include<iostream>
// using namespace std;
// int root(int n){
//     int target = n;
//     int s = 0;
//     int e = n;
//     int mid = (s+e)/2;
//     int result = -1;
//     while(s<=e){
//         if(mid*mid == target){
//             result = mid;
//             return mid;

//         }
//         else if(mid*mid > target){
//             e = mid -1;
//         }
//         else{
//             s = mid +1;
//             result = mid;
//         }
//         mid = (s+e)/2;

//     }
//     return result;
    

// }
// int main(){
//     int n ;
//     cout<<"enter the number";
//     cin>>n;
//     int result = root(n);
//     double step = 0.1;
//     double finalans = result;
//     for(int i = 0 ; i<= result; i++ ){
//         for(double j = finalans ; j*j <= n ; j = j+step){
//             finalans = j;
//         }
//         step = step/10;
//     }
//     cout<<finalans;
    
// }


// #include<iostream>
// using namespace std;
// bool binarysearch(int arr[][4] , int rows , int cols , int target,int &rowpos , int &colpos){
// int s = 0 ;
// int e = rows*cols -1;
// int mid = s+(e-s)/2;
// while(s <= e){
//     int rowindex = mid/cols;
//     int colindex = mid%cols;
//     if(arr[rowindex][colindex] == target){
//         rowpos = rowindex+1;
//         colpos = colindex +1;
//         return true;
//     }
//     if(arr[rowindex][colindex] < target){
//         s = mid +1;
//     }
//     else{
//         e = mid -1;
//     }
//     mid = s+(e-s)/2;

// }
// return false;
// }
// int main(){
//     int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}, {13,14,15,16},{17,18,19,20}};
//     int rows  = 5;
//     int cols = 4;
//     int target;
//     cin>>target;
//     int rowpos = -1;
//     int colpos = -1;

    
//     bool ans = binarysearch(arr,rows,cols,target,rowpos,colpos);
//     if(ans){
//         cout << "Found at position: (" << rowpos << ", " << colpos << ")" << endl;
        

//     }
//     else{
//         cout<<"not found"<<endl;
//     }



// }




// #include<iostream>
// #include<vector>
// using namespace std;
// int binary(vector<int>arr, int target){
//     int s = 0 ;
//     int e = arr.size()-1;
//     int mid = (s + (e-s))/2;
//     while(s<=e){
//         if( arr[mid] == target){
//             return mid;
//         }
//         if (mid-1 >= 0 && arr[mid -1] == target){
//             return mid-1;
//         }
//         if (mid+1 < arr.size() && arr[mid+1] == target){
//             return mid +1;
//         }
//         if(arr[mid]<target){
//             s = mid +2;

//         }
//         else{
//             e = mid - 2;

//         }
//         mid = s+(e-s)/2;

//     }
//     return -1;
// }
// int main(){
//     vector<int> arr{10,3,40,20,50,80,70};
//     int target = 70;
//     int ans = binary(arr,target);
//     cout<<ans;
//     return 0; 

// }



// #include<iostream>
// using namespace std;
// int solve(int dividend , int divisor){
//     int s = 0 ;
//     int e = abs(dividend);
//     int mid = s+(e-s)/2;
//     int ans;
//     while(s<=e){
//         if(abs(mid*divisor) == abs(dividend)){
//             ans = mid;
            
//         }
//         if(abs(mid*divisor) > abs(dividend)){
//             e = mid-1;
//         }
//         else{
            
//             s = mid +1;
//         }
//         mid = s+(e-s)/2;
//     }
//     if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
//         return ans;
//     }
//     else{
//         return -ans;
//     }

    
// }
// int main(){
//     int dividend = -22;
//     int divisor = -7;
//     int ans = solve(dividend,divisor);
//     cout<<ans<<endl;
//     return 0;


// }



// #include<iostream>
// using namespace std;
// int main(){
    
// }