// #include<iostream>
// using namespace std;
// class animal{
//     public: 
//     int age;
//     string name;




// };
// int main(){
//     cout<<"size of empty class is: "<<sizeof(animal)<<endl;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// class animal{
//     private:
//     int weight;
//     public:
//     int age;
//     string name;

//     void eat(){
//         cout<<"eating"<<endl;

//     }
//     void sleep(){
//         cout<<"sleeping"<<endl;

//     }


//     int getweight(){
//         return weight;
//     }
//     void setweight(int w){
//         weight = w;
//     }

// };
// int main(){
//     animal ramesh;
//     ramesh.age = 12;
//     ramesh.name = "lion";
//     cout<<"age of ramesh is "<<ramesh.age<<endl;
//     cout<<"name is ramesh is "<<ramesh.name<<endl;
    

//     ramesh.eat();
//     ramesh.sleep();
//     ramesh.setweight(101);
//     cout<<"weight"<<ramesh.getweight()<<endl;

// }



// #include<iostream>
// using namespace std;
// class animal{
//     private:
//     int weight;
//     public:
//     int age;
//     string name;

//     void eat(){
//         cout<<"eating"<<endl;

//     }
//     void sleep(){
//         cout<<"sleeping"<<endl;

//     }

//     int getweight(){
//         return weight;
//     }
//     void setweight(int w){
//         weight = w;
//     }

// };
// int main(){
    
// animal* suresh = new animal;
// (*suresh).age = 15;
// (*suresh).name = "billi";
// suresh->eat();
// suresh->sleep();
// }



// #include<iostream>
// using namespace std;
// class animal{
//     private:
//     int weight;
//     public:
//     int age;
//     string type;
//     animal(){
//         this->weight = 0;
//         this->age = 0;
//         this->type = "";
//         cout<<"constructor called"<<endl;
//     };
//     //parameterised constructor
//     animal(int age){
//         this->age = age;
//         cout<<"parameterised constructor called"<<endl;
//     }
    
// };
// int main(){
    
// // animal* suresh = new animal;
// // (*suresh).age = 15;
// // (*suresh).type = "billi";
// animal ramesh(15);
// animal *suresh = new animal(100);
// // animal suresh = ramesh;

// // suresh->eat();
// // suresh->sleep();
// }



// #include<iostream>
// using namespace std;
// class animal{
//     public:
//     int age;
//     int weight;
    
//     void eat(){
//         cout<<"eating"<<endl;
//     }
// };
// class Dog:public animal{

// };
// int main(){
//     Dog d1;
//     d1.eat();


// }



// #include<iostream>
// using namespace std;
// class animal{
//     private:
//     int age;
//     int weight;
//     public:
//     int quantity;
//     int extinct;
//     protected:
//     int color;
//     int left;
    
// };
// class dog:public animal{
//     public:
//     void print(){
//         cout<<this->quantity<<endl;
//         cout<<this->color;
//     }
    

// };
// int main(){
//     dog d1;
//     d1.print();
    


// }


