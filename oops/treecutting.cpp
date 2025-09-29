#include<bits/stdc++.h>
#include<string>
#include<math.h>

using namespace std;
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
    showWeaponStatus(){
        cout<<"Name: "<<name<<endl;
        cout<<"Cutting Power: "<<cutting_power<<endl;
        cout<<"Durability: "<<durability<<endl;
        cout<<"Efficiency: "<<efficiency<<endl;
    }
    // individual methods for getting the values of private attributes
    getname(){return name;}
    getCuttingpower(){return cutting_power;}
    getDurability(){return durability;}
    getEfficiency(){return efficiency;}

// parameterized constructor to initalize the values of the attributes when the object is created
    Weapon(string name, int power, int durability, int efficiency){
        this -> name = name;
        this -> cutting_power = power;
        this -> durability = durability;
        this -> efficiency = efficiency;

    }
    // setter methods for setting values and validating them
    setDurability(int dur){
        if(dur >= min_durability && dur <= max_durability){
            this -> durability = dur;
        }else{
            cout<<"Invalid durability value"<<endl;
        }
    }

    setCutting_power(int powe){
        if(powe >= min_cutting_power && powe <= max_cutting_power){
            this -> cutting_power = powe;
        }else{
            cout<<"Invalid cutting power value"<<endl;
        }
    }

    setEfficiency(int eff){
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
    repair(amt){
        durability = min(max_durability, durability + amt);
        if(durability == max_durability)
            cout<<name<<" is fully restored to its original condition!"<<endl;
    }
     void CutTree(){
        // the cutting power and efficiency of the weapon would determine how much the tree is cut down 
        // since there is no class of character and tree yet this will be placeholder
     }

};

class Tree{
    string name;
    
}