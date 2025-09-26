 #include<bits/stdc++.h>
 #include<string>
 #include<algorithm>
 #include <cstdlib>
#include <ctime>

 using namespace std;
//class mom - Mother who cooks takes care of son etc etc;

// formal declaration of son class so that it wont cause complier issues

class Son{
    private:
        string name;
        int age;
        int mischief_level;
        int respect_level;
        int energy_level;

        const int max_mischief = 100;
        const int min_mischief = 00;
        const int max_respect = 100;
        const int min_respect = 00;
        const int max_energy = 100;
        const int min_energy = 00;


        public:
        // constructor for son class
        Son(string name, int age, int mischief, int respect, int energy){
            this -> name = name;
            this -> age = age;
            this -> mischief_level = mischief;
            this -> respect_level  = respect;
            this -> energy_level = energy;
        }   

        string getName() { return name; }
        // method to show status
            void Show_status(){
                cout<<"NAME: "<<name<<endl;
                cout<<"AGE: "<<age<<endl;
                cout<<"Mischief Level: "<<mischief_level<<endl;
                cout<<"Respect Level: "<<respect_level<<endl;
                cout<<"Energy Level: "<<energy_level<<endl;
            }

            void increaseEnergy(int amt){
                energy_level = min(max_energy, energy_level + amt);
                if(energy_level == max_energy){
                    cout<<name<<" is full of damn energy!"<<endl;
                }
            }

            void decreaseEnergy(int amt){
                energy_level = max(min_energy, energy_level - amt);
                if(energy_level == min_energy){
                    cout<<name<<" is too damn tired!"<<endl;
                }
            }

            void reduceMischief(int amt){
                mischief_level = max(min_mischief, mischief_level -amt);
                if (mischief_level == min_mischief){
                    cout<<name<<" has become very disciplined!"<<endl;
                }
            }
            
            void increaseRespect(int amt){
                respect_level = min(max_respect, respect_level + amt);
                if(respect_level == max_respect){
                    cout<<name<<" has become a very respectful lad!"<<endl;
                }
            }

            void play(){
                if(energy_level < 20){
                    cout<<name<< " is too damn lazy to play rn!"<<endl;
                    return;
                }else{
                    mischief_level = min(max_mischief  , mischief_level +15);
                    energy_level = max(min_energy, energy_level -25);
                    cout<<name<<" played and his mischief level is now at: "<<mischief_level<<endl;

                }
            }
            void study(){
                if(energy_level < 20){
                    cout<<name<<" is too damn lazy to study rn!"<<endl;
                    return;
                }else{
                    respect_level = min(max_respect, respect_level +10);
                    energy_level = max(min_energy, energy_level - 10);
                    cout<<name<<" studied and his respect level is now at: "<< respect_level<<endl;
                }
            }

            void eatmeal(int meal_quality){
                increaseEnergy(meal_quality / 2);
                
                if(meal_quality >= 75){
                    reduceMischief(10);
                    increaseRespect(10);


                }else if(meal_quality >= 50){
                    reduceMischief(5);
                    increaseRespect(5);
                }else if(meal_quality >= 25){
                    mischief_level = min(max_mischief, mischief_level + 10);
                }

                cout << name <<"ate the meal of quality: "<<meal_quality<<endl;
                cout << name <<" has replineshed his energy to: "<< energy_level<<endl;
                cout << name <<" has his mischief level at: "<< mischief_level<<endl;

            }
};
     

class Mother{
    private: // access modifier to make sure the data which are not be revealed are hidden

    string name;
    int age;
    int cooking_skill; // 0 - 100 similar to a rating system 
    int patience_level;
    int energy_level;

    public: // access modifier for getter and setter methods so that we can access the private members without f'ming them up
        void show_status(){
            cout<<"Name: " << name<<endl;
            cout<<"Age: " << age<<endl;
            cout<<"Cooking Skill: " << cooking_skill<<endl;
            cout<<"Patience Level: "<<patience_level<<endl;
            cout<<"Energy Level: "<<energy_level<<endl;

            
        }
        //constuctor to initalize the values of the attributes 
        Mother(string name , int age, int cooking, int patience, int energy){
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

    int getenergy(){return energy_level;}
    int getpatience(){return patience_level;}
    int getcookingskill(){return cooking_skill;} 
    
    // a cook method which would return the quality of the meal cooked based on the energy level, etc etc from mother class

    int cook(){
        if(energy_level <= 20){
            cout<<"Mom's too tired to cook!"<<endl;
            return -1;
        }
        int meal_quality = cooking_skill + (rand() % 101); // adds 0–100
        meal_quality = max(10, min(110, meal_quality));    // clamp to [10,110]
 //

        energy_level = max(50, energy_level - 10); 
        patience_level = max (50, patience_level - 5);
        cout<<name<<"cooked a meal of quality: "<<meal_quality<<endl;

        return meal_quality;
    }
    // a method to discipline the son
    void disciplineSon(Son &s) {
    if (patience_level <= 10 || energy_level <= 10) {
        cout << name << " is too tired or impatient to discipline " << s.getName() << " effectively!" << endl;
        s.reduceMischief(2);  // very weak effect
        return;
    }

    cout << name << " disciplines " << s.getName() << " firmly!" << endl;

    // Effect on Son
    s.reduceMischief(20);
    s.increaseRespect(15);
    s.decreaseEnergy(15);

    // Cost to Mom
    energy_level = max(0, energy_level - 5);
    patience_level = max(0, patience_level - 3);
}

};
// class son - son who plays, studies, eats, makes mischief eetc etc;






    int main() {
    srand(time(0));

    Mother mom1("Jenna ortega", 35, 80, 70, 90);
    Son son1("beetlejuice", 10, 30, 40, 80);

    mom1.show_status();
    son1.Show_status();

    // Mom cooks and son eats
    int meal = mom1.cook();
    son1.eatmeal(meal);

    // Son plays and studies
    son1.play();
    son1.study();

    // Mom disciplines Son
    mom1.disciplineSon(son1);

    // Show final status
    mom1.show_status();
    son1.Show_status();
}

