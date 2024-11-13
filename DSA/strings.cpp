// #include<iostream>
// using namespace std;
// int main(){
//     char name[100];
//     cin>>name;
//     cout<<name;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     char name[100];
//     cin.getline(name , 50);
//     cout<<name;
// }



// #include<iostream>
// #include<string.h>
// using namespace std;
// int getLength(char name[]){
//     int l = 0 ;
//     int i = 0;
//     while(name[i] != '\0'){
//         l++;
//         i++;
//     }
//     return l;
// }
// int main(){
//     char name[100];
//     cin>>name;
//     cout<<getLength(name)<<endl;
//     cout<<strlen(name)<<endl;

// }


// #include<iostream>
// #include<string.h>
// using namespace std;
// void reversedstring(char name[]){
//     int i = 0 ;
//     int n = strlen(name);
//     int j = n-1;
//     while(i<=j){
//         swap(name[i],name[j]);
//         i++;
//         j--;
//     }
 

// }
// int main(){
//     char name[100];
//     cin>>name;
//     reversedstring(name);
//     cout<<name;

// }


// #include<iostream>
// #include<string.h>
// using namespace std;
// void applyattherate(char name[]){
//     for(int i = 0 ; i<strlen(name) ; i++){
//         if(name[i] == ' '){
//             name[i] = '@';
//         }

//     }
// }
// int main(){
//     char name[100];
//     cin.getline(name,100);
//     applyattherate(name);
//     cout<<name;
// }



// #include<iostream>
// #include<string.h>
// using namespace std;
// bool checkpalen(char name[]){
//     int i = 0;
//     int j = strlen(name) -1;
//     while(i<=j){
//         if(name[i] != name[j]){
//             return false;

//         }
//         return true;

//     }
    
// }
// int main(){
//     char name[100];
//     cin.getline(name,100);
//     if(checkpalen(name)){
//         cout<<"it is palendrone";


//     }
//     else{
//         cout<<"it is not";
//     }
    

// }
// #include<iostream>
// #include<string.h>
// using namespace std;
// void uppercase(char name[]){
//     int i = 0;
//     while(name[i] != '\0'){
//         if(name[i]>=97 && name[i]<=122){
//             name[i] = name[i] - 32;
//         }
//         i++;
//     }
// }
// int main(){
//     char name[100];
//     cin.getline(name,100);
//     uppercase(name);
//     cout<<name;

// }


// #include<iostream>
// #include<string.h>
// using namespace std;
// void lowercase(char name[]){
//     int i = 0;
//     while(name[i] != '\0'){
//         if(name[i]>=65 && name[i]<=92){
//             name[i] = name[i] + 32;
//         }
//         i++;
//     }
// }
// int main(){
//     char name[100];
//     cin.getline(name,100);
//     lowercase(name);
//     cout<<name;

// }


// #include<iostream>
// #include<string>
// using namespace std;
// bool compare(string a , string b){
//     if(a.length() != b.length()){
//         return false;
//     }
//     else{
//         int j = 0;
//         for(int i = 0 ; i<a.length() ; i++){
//             if(a[i] != b[j]){
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// int main(){
//     string x = "abcd";
//     string y = "efgh";
//     cout<<x.compare(y)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class animal{
//     public:
//     void eat(){
//         cout<<"eating";
//     }

// };
// class dog : public animal{

// }



#include<iostream>
using namespace std;
int main(){
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    if(a.compare(b) == 0){
        cout<<"a and b are same"<<endl;

    }
    else{
        cout<<"a nd b are not same"<<endl;
    }
}


// string sentence = "Hello jee kaise ho ";
// string target = "kaise";
// cout << sentence.find(target);

// }


