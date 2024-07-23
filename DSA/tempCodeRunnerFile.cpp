#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    
    int arr[n];
    for(int i = 0;i<n;i++ ){
        cin>>arr[i];
    }
    int end = n-1;
    for(int start = 0; start<=end ; start++ ){
        if(start == end){
            cout<<arr[start]<<" ";
            break;
        }
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        
        end--;
    }
}
