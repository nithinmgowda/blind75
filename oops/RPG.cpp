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
    };

     // weapon class 
     // it is a separate class which is linked to players or enemies its like a composition relationship

        class Weapon {
            string weaponname;
            int bonusattack;

            public:
            weapons(string wn , int ba ) : weaponname(wn), bonusattack(ba){}

            int getBonusAttack(){ return bonusattack; }
            string getWeaponName(){ return weaponname; }
        };

        //derived class for player which inherits from the character class

        class Player : public Character {
            int level;
            int experience;
            Weapon *weapon;

            public:
            player(string n):character(n, 120 , 20 , 5), level(1), experience(0), weapon(nullptr){}


            void equipWeapon(weapon *w){
                weapon = w;
                cout<<name<<"equipped"<< weapon->getWeaponName()<<endl;

            }
            void attack(Character &target) override {
                int totalAttack = attackpower +(level * 2);
                if(weapon != nullptr) totalAttack += weapon->getBonusAttack();
                int damage = totalAttack - target.defense;

                if(damage > 0) target.takeDamage(damage);
                cout<< name << "strikes with";
                if(weapon != nullptr) cout << weapon ->getWeaponName();
                else cout << "bare hands";
                cout << "for"<< damage << "damage."<<endl;

            }
            void gainExerience(int exp){
                experience += exp;
                cout << name << "gained" <<exp << "XP!\n";
                if(experince >= 100){
                    levelUp();
                    exeperince =0;
                }
            }
            void levelUp(){
                level++;
                attackPower += 10;
                health += 50;
                defense += 10;
                cout <<name<<"leveled up to level"<< level <<"!\n";

            }
        };


        // derived class for enemy which inherits from the character class

        class Goblin : public Character{
            public:
            Goblin() : Character("Goblin", 80 , 15 , 3){}

            void attack(Character &target) override{
                cout<< name << "slashes with a dagger!\n";
                Character::attack(target);
            }
        };

        class Dragon : public Character{
            public:
            Dragon() : Character("Dragon", 280 , 25 , 10){}

            void attack(Character &target) override{
                cout<< name << "Breathes fire!\n";
                Character::attack(target);
            }
        };

        class Mage : public Character{
            public:
            Mage() : Character("Mage", 120 , 20 , 5){}

            void attack(Character &target) override{
                cout<< name << "casts the infinte dark void!\n";
                Character::attack(target);
            }
        }