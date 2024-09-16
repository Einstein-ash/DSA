#include <iostream>
using namespace std;


class Hero{


 private :
    int health ; 
    char name ;

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

};

int main() {
cout<< endl;

// statically 
     Hero ash;



     
      
  
// dynamically 
Hero *b = new Hero;
b -> setLevel(10);
Hero *c = new Hero();   // same to above line 



b -> print();

// calling parameterized contructor of health value
Hero R(90);
R.setLevel(2);
cout<< "in r : "<<R.getHealth()<< endl;

cout<< endl<< endl;


cout<< "---------"<< endl;

// calling copying constructor  (inbuilt)
Hero S(R);
cout<< "in s : "<<S.getHealth()<< endl;
cout<< "in s : "<< S.getLevel()<< endl;


// default copy constructor is shallow : means it will not make copy , if change in one will reflect to another also 

// therefor use : copy assignment operetor  (deep copy constructor )
}