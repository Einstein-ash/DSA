// home work :
//   const keyword,
//  object creation 
// 

// learnt 
//  static members : common to all the  objects , 
//  call using class name ;
//  static functions : we access only static members 
//                   - doesn't have this keyword 

#include <iostream>
using namespace std;


class Hero{


 private :
    int health ; 
    char name ;
   static int timeToComplete ;    // if not depend on any object : (so make it static) : 

    // static ko access krne k liye hame object ki jrurt nhi hoti ;

public: 
    int level ;


// khud ka contructor 
Hero() {
    cout<< "constructor is called "<< endl;
}


// Parameterize contructor 
Hero (int health ){
    cout<< "// Parameterize contructor called" << endl;

    // health = health;
    this -> health = health;
    // this -> health : is health of object 
    // health : is health of passed parameter
}


// copy consturctor 
Hero(Hero &temp){    // pass by ref. krna h, pass by value m fss jayenge : (infinite call of default contructor )
    this -> health = temp.health;
    this -> level  = temp.level;
    cout<< "copy const called "<<endl;
}
 void print(){
    // cout<< health << endl;
    cout<< level << endl;
 }

 int getHealth(){
    return health;
 }

int getLevel(){
    return level;
}

void setHealth(int h){
    health = h;
}

void setLevel(int l){
    level = l ;
}




//  -- destructor 
~Hero() {
    cout<<"destructor called "<< endl;

}

};


//  init of static variable 
int Hero::timeToComplete = 5;

int main() {
cout<< endl;

Hero a;               // staticallly created 
Hero *b = new Hero;   // dynamically created

// for static defalut destructor is called auto, but 
// for dynamically created : we have to mannually create it :

delete b;


    //  cout<<Hero::timeToComplete<< endl;



    // 


cout<< endl<< endl;
}