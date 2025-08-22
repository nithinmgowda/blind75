#include <bits/stdc++.h>
#include <string>
using namespace std;


// abstraction 
// we define an abstract class "Vehicle" with virtual functions to make sure that any specific 
// Vehicle must impliment these methods in its own way.


class Vehicle{
    protected:
    Vehicle(string b, string m , double p): 
    brand(b), model(model), baseprice(p){}
    
    //virtual desturctor 
    virtual ~Vehicle(){}
    
    virtual void displayDetails() = 0;
    
    
    virtual double calculateRent(int days) = 0;
};

//inheritance 
// any type of Vehicle can inherit from the base class Vehicle and these classes are called inherited classes

class Car : public Vehicle{
    int seatingCapacity;
    
    public:
    Car(string b , string m , double p , int seats) : Vehicle(b, m , p), seatingCapacity(seats){}

    
    void displayDetails() override {
        cout << "Car : " <<brand << " "<<model << " | seats : "<<seatingCapacity<<" | price/days" << baseprice<<endl;
    }
    double calculateRent(int days) override {
        return baseprice * days;
    }
};

class Bike : public Vehicle {
    bool isgear;
    
    public: 
    Bike(string b , string m , double p, bool gear) : Vehicle(b, m,p), isgear(gear){}
    
    void displayDetails() override{
    cout << "Car : " <<brand << " "<<model << " | gear : "<<(isgear ? "Yes" : "No"<<" | price/day" << baseprice<<endl;
}

    double calculateRent(int days) override {
        double rent = baseprice * days;
        if(days > 5) rent *= 0.9;
        return rent;
    }
};


