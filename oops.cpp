/*
class = user defined datatype,
blueprint which has attributes and functions.

*/




#include<iostream>
using namespace std;
class student{
    string name;
    public:
   
    int age; // datamembers = name, age ,gender.
    string gender;
    void setName(string s,){ // setter function
        name =s;
      
    }

    student(string s,int a ,string g){
        name =s;
          age = a;
        gender =g;
    } //parameterised contructor

    student(student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
    }//copy constructor

    student(){
        cout<<"default constructor"<<endl;
    }// default constructor


 void getName(){ // get function
    cout<<name<<endl;
 }


//destructor
~student(){
    cout<<"destructor is called"<<endl;
}






    void printInfo(){
        cout<<"NAME=";
        cout<<name<<endl;
        cout<<"AGE=";
        cout<<age<<endl;
        cout<<"GENDER=";
        cout<<gender<<endl;


    }   




    bool operator == (student &a){
        if(name== a.name && age == a.age && gender == a.gender){
           return true;
        }
        else{
            return false;
        }
    }
};
int main(){
   /* student a; // a ,b and c are object of class student
    a.name = "isha";
    a.age = 20;
    a.gender = "female";

    student b;
    b.name='sana';
    b.age= 23;
    b.gender = "female";
    
    student c;
    c.name='rohan';
    c.age= 22;
    c.gender = "male";
    
    student b;
    b.name='sana';
    b.age= 23;
    b.gender = "female"*/
  /*  student arr[3];
    for(int i =0;i<3;i++){
        string s;
        cout<<"NAME = ";
        cin>>s;
        arr[i].setName(s);
        cout<<"AGE =";
        cin>>arr[i].age;
        cout<<"GENDER =";
        cin>>arr[i].gender;
    }

    for(int i =0;i<3;i++){
        arr[i].printInfo();
    }
*/
student a("isha",20,'F'){
    a.printInfo();
}
student b; // default constructor
student.b("rashi",22,"M");
student c =a;//copy constructor  pointers and location to which they are pointing are also copied.

//opoerator overloading
if(c== a){
    cout<<"same"<<endl;
}
else{
    cout<<"not smame"<<endl;
}
return 0;
}