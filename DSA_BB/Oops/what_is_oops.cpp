// class = is a user defined data type 
// object = instance of class 
// use any method : include or simple define in the same file 
// #include "Hero.cpp"

// in case of empty class : single bit of size it will use 
// Acesss modifier :
//      -Private 
//      -public
//      -protected
//  
//  by default : in class it is private 


// h/w - read about Padding  , greedy alignment 
//------------------------------------------------------------

#include <iostream>
using namespace std;


class Hero {


// properties 
   
    int health ;
public :  // mtlb abb isko kahi bhi use kr skte h
    int level;

private :     // sirf class k andr access kr skta hu
    int name ;

public :

 void print(){
    cout<< name << endl;
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


};




int main() {
cout<< endl;


     // creation of object of type hero 
     Hero ash;
    //  ash.health = 10;
     ash.level = 4;
     
    //  jitni properties hoti utna hi size hota
    //  cout<< "size : " << sizeof(ash)<< endl;

// to access data members : using dot(.)  operator 

// cout<< "health is : "<< ash.health<< endl;
// cout<< "Level is : "<< ash.level<< endl;    // level and health are private 

ash.setHealth(4);
// cout<< "health   : "<< ash.getHealth();



// static allocation 
Hero a ;
a.setHealth(10);
a.setLevel(5);
cout<< "level : "<< a.level<<endl;
cout<< "health : "<< a.getHealth()<<endl;

// dynamically 
Hero *b = new Hero;
b-> setHealth(40);
b-> setLevel(20);
cout<< "level : "<< (*b).level<<endl;
cout<< "health : "<< (*b).getHealth()<<endl;

cout<< "level : "<< b->level<<endl;
cout<< "health : "<< b -> getHealth()<<endl;




cout<< endl<< endl;
}