#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

    class Character {
        protected: //to keep the attributes private but accessible to derived classes

        string name; // character's name 
        int health; // health points of the chara
        int attackpower; // attack power
        int defense; //defense points

        public: //public methods to access and modify private attributes

        //construtor  -> to initialize the attributes

        Chracter( string n, int h , int ap, int d) : name(n), health(h), attackpower(ap), defense (d){}


        //virtual function to be overridden by derived classes -> enables polymorphism 
        //derived classes can provide specific attack behavior

        virtual void attack(Character &target){
            int damage = attackpower - target.defense;
            if(damage > 0){
                target.takeDamage(damage);
                cout<< name << "attacks"<< target.name<< "for" << damage << "damage."<<endl;
            }

            void takeDamage(int damage){ // encapsulation -> health can only be reduced by this method 
                health -= damage;
                if(health <= 0){
                    health = 0; // preventing health from going negative
                    cout<< name << "has been defeated!"<<endl;
                }

                //getter and status check methods
                bool isAlive(){return health > 0;}// to check if the alive
                string getName(){return name;}// gets the name 
                int getHealth(){return health;}//gets the health 

            }
    }