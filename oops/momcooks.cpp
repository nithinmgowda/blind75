 #include<bits/stdc++.h>
 #include<string>
 #include<algorithm>
 using namespace std;
//class mom - Mother who cooks takes care of son etc etc;

class Mother{
    private: // access modifier to make sure the data which are not be revealed are hidden

    string name;
    int age;
    int cooking_skill; // 0 - 100 similar to a rating system 
    int patience_level;
    int energy_level;

    Public: // access modifier for getter and setter methods so that we can access the private members without f'ming them up
        void show_status(){
            cout<<"Name: " << name<<endl;
            cout<<"Age: " << age<<endl;
            cout<<"Cooking Skill: " << cooking_skill<<endl;
            cout<<"Patience Level: "<<patience_level<<endl;
            cout<<"Energy Level: "<<energy_level<<endl;

            
        }

        mom(string name , int age, int cooking, int patience, int energy){
            this -> name = name;
            this -> age = age;
            this -> cooking_skill = cooking;
            this -> patience_level = patience;
            this -> energy_level = energy;
        }

// setter methods to set the values of the private attributes
        void setCookingskill(int skill){
            if(skill >= 0 && skill <= 100){
                this -> cooking_skill = skill;
            }else{cout << "invalid skill level!"<<endl;}

        }
        void setPatienceLevel(int patience){
            if(patience >= 0 && patience <= 100){
                this -> patience_level = patience;
            }else{cout<<"Invalid Patience level"<<endl;}
        }

        void setEnergyLevel(int energy){
            if(energy >= 0 && energy <= 100){
                this -> energy_level = energy;
            }else{cout<<"Invalid energy level"<<endl;}
        }

    // now we write the get methods for private attributes we have already written the status method but 
    // but these methods would be to get the individual attributes
}



int main(){}