/* so this basically my way of learning oops or how i learnt it 
made a simple library management system where while i code the stuff i also understand how i did soo*/


#include<bits/stdc++.h>
#include<vector>
#include<string>

// so im learning oops concept hands on which would make my interview processes easier//

//class it is basically a blueprint for objects
// what is object? object is like a real entity which can be implemented in code

class Book{
    private: // it is one of the access modifiers  in this modifier the values or attributes to be exact which cannot be accessed publically or also can say as hidden data
    
    int id;
    string title;
    string author;
    bool isissued; // all these variables or parameters or attributes are private members of the class book;
    
    public: // another type of access modifiers where the attributes can be accessed by anyone 
    
    //now we make a constructor 
    // what is a constructor? it is a method used to initialze objects --
    // it has three types parameterized , non parameterized , copy constructor;
    
    // the one we use next is a parameterized constructor
    
    Book(int i, string t, string a){
        id = i;
        title = t;
        author = a;
        isissued = false; // default : book is available in the library
        
    }
    //now we initialze a getter method which is a method in encapsulation where u get the values of the attributes using funtions which are known as methods in oops
    
    //getter 
    int getId(){return id;}
    string getTitle(){return title;}
    string getauthor(){return author;}
    bool getstatus(){return isissued;}
    
    //now we initialze a setter method which as it says is used to set values for private attributes
    
    void issueBook() {isissued = true;}
    void returnBook() {isissued = false;}
    
    // now we display the book while hiding the internal representation (abstraction) 
    
    void displayBook(){
        cout<<"ID: "<<id<< "| Title: "<<title<<"| Author: "<<author<<" | Status: "<<(isissued ? "Issued : available")<<endl;
    }
};

// now that marks the first important parts of oops it keeps getting better lets hang on

