#include<bits/stdc++.h>
#include<string>
#include<math.h>

using namespace std;
class Tree{
    string name;
    float width;
    float height;
    int health;
    int wood_yield;
    // int Durability;
    // const int max_durability = 100;
    // const int min_durability = 0;
    const int max_health = 1000;
    const int min_health = 0;


     public:

    // status method to show the status of the tree

     void showTreeStatus(){
        cout<<"Name: "<<name<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Health: "<<health<<endl;
        cout<<"Wood Yield: "<<wood_yield<<endl;
        cout<<"Is Alive: "<<isAlive()<<endl;
    }

    //parameterized constructor

    Tree(string name, float width, float height, int health ,int wood_yield){
        this -> name = name;
        this -> width = width;
        this -> height = height;
        this -> health = health;
        wood_yield = Wood_Yield();
    }

    // getter methods

   string getName(){return name;}
   int getHealth(){return health;}
   float getWidth(){return width;}
   float getHeight(){return height;}
   int getWood_yield(){return wood_yield;}


    void setHeight(float h){
        if(h >0){
            this -> height = h;

        }else{
            cout<<"Invalid value"<<endl;
        }
    }
    void setwidth(float w){
        if(w > 0){
            this -> width = w;
            
        }else{
            cout<<"Invalid value"<<endl;
        }
     }

    void sethealth(int h){
        if(h >= min_health && h <= max_health){
            this -> health = h;
        }else{
            cout<<"Invaild value"<<endl;
        }
     }
     /* void setDurability(int d){
        if(d >= min_durability && d <=max_durability){
            this -> Durability = d;
        }
     } */


     bool isAlive(){
        if(health <= min_health)
            return false;
            else 
            return true;
     }

    int tree::takeDamage(int dmg){
        health = max(min_health, health - dmg);
        if(health == min_health){
            cout<<name<<" has been cut down!"<<endl;
            return Wood_Yield();
        }
        return 0;
     }

     int Wood_Yield(){
        float loss_factor = rand() % 21 + 75; // Random loss factor between 75 and 95
        int yield = (height * width) * (loss_factor / 100.0);
        wood_yield = static_cast<int>(yield);
        return wood_yield;
     }

     

};
// class for weapon which whould be used by the tree cutter for cutting trees by providing different types of weapon objects
class Weapon{
    //private access modifier for data hiding which is basically encapsulation and abstraction in oops
    private:
    string name;
    int cutting_power;
    int durability;
    int efficiency;
    const int max_efficiency = 100;
    const int min_efficiency = 0;
    const int max_cutting_power = 100;
    const int min_cutting_power = 0;
    const int max_durability = 100;
    const int min_durability = 0;

    public:
     // method to show the status of the weapon for all attributes basically like a status menu in games
    void showWeaponStatus(){
        cout<<"Name: "<<name<<endl;
        cout<<"Cutting Power: "<<cutting_power<<endl;
        cout<<"Durability: "<<durability<<endl;
        cout<<"Efficiency: "<<efficiency<<endl;
    }
    // individual methods for getting the values of private attributes
    string getname(){return name;}
    int getCuttingpower(){return cutting_power;}
    int getDurability(){return durability;}
    int getEfficiency(){return efficiency;}

// parameterized constructor to initalize the values of the attributes when the object is created
    Weapon(string name, int power, int durability, int efficiency){
        this -> name = name;
        this -> cutting_power = power;
        this -> durability = durability;
        this -> efficiency = efficiency;

    }
    // setter methods for setting values and validating them
    void setDurability(int dur){
        if(dur >= min_durability && dur <= max_durability){
            this -> durability = dur;
        }else{
            cout<<"Invalid durability value"<<endl;
        }
    }

    void setCutting_power(int powe){
        if(powe >= min_cutting_power && powe <= max_cutting_power){
            this -> cutting_power = powe;
        }else{
            cout<<"Invalid cutting power value"<<endl;
        }
    }

    void setEfficiency(int eff){
        if(eff >= min_efficiency && eff <= max_efficiency){
            this -> efficiency = eff;
        }else{
            cout<<"Invaild efficiency value"<<endl;
        }
    }
    // method to verify if the weapon is broken or functional
    bool isBroken(){
        if( durability <= min_durability)
            return true;
            else
            return false;

    }
    // method to repair the weapon based on input amount
    void repair(int amt){
        durability = min(max_durability, durability + amt);
        if(durability == max_durability)
            cout<<name<<" is fully restored to its original condition!"<<endl;
    }
     int Weapon::cutTree(Tree &tree){
        // the cutting power and efficiency of the weapon would determine how much the tree is cut down 
        if(isBroken()){
            cout<<name<<" is broken and cannot be used without repairing it first!"<<endl;
            return 0;
        }
        int damage = static_cast<int>(cutting_power * (efficiency / 100.0));
        cout<<name<<"does damage of; "<<damage <<" to "<<tree.getName()<<endl;
        durability = max(min_durability, durability - 15);

        int yield = tree.takeDamage(damage);
        if(isBroken()){
            cout<<name<<" has broken after cutting the tree!"<<endl;
        }
        return yield;

     }

};

int main(){
     srand(time(0)); // seed random for wood yield

    //  Instantiate 3 trees
    Tree oak("Oak", 5.0, 20.0, 1000, 0);
    Tree pine("Pine", 4.0, 18.0, 800, 0);
    Tree birch("Birch", 3.5, 15.0, 600, 0);

    // Show initial tree status
    oak.showTreeStatus();
    pine.showTreeStatus();
    birch.showTreeStatus();

    cout << "-------------------------------------" << endl;

    //  Instantiate 2 weapons
    Weapon axe("Steel Axe", 50, 100, 80);
    Weapon saw("Hand Saw", 35, 90, 90);

    // Show initial weapon status
    axe.showWeaponStatus();
    saw.showWeaponStatus();

    cout << "-------------------------------------" << endl;

    //  Simulate cutting trees with both weapons
    int totalWoodCollected = 0;

    // Oak first
    totalWoodCollected += axe.cutTree(oak);
    totalWoodCollected += saw.cutTree(oak);

    // Pine
    totalWoodCollected += axe.cutTree(pine);
    totalWoodCollected += saw.cutTree(pine);

    // Birch
    totalWoodCollected += axe.cutTree(birch);
    totalWoodCollected += saw.cutTree(birch);

    cout << "-------------------------------------" << endl;

    //  Show updated tree status after cutting
    oak.showTreeStatus();
    pine.showTreeStatus();
    birch.showTreeStatus();

    cout << "-------------------------------------" << endl;

    //  Show updated weapon status
    axe.showWeaponStatus();
    saw.showWeaponStatus();

    cout << "-------------------------------------" << endl;

    //  Repair weapons
    axe.repair(50);
    saw.repair(30);

    cout << "-------------------------------------" << endl;

    //  Show total wood collected
    cout << "Total wood collected from all trees: " << totalWoodCollected << endl;

    return 0;
}