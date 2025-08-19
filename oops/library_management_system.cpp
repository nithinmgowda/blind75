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

//lets create a base class for the inheritance process
// what is inhertance it basically means one class inherits or acquires the properties of a parent class
// a child class dervies its properties from its parent class

class User{
    protected: // this another type of access modifer whose attributes can only be accessed by derived classes
    int userId;
    string name;

    public:
    //constructor

    user(string n , int id){
        this-> name = n;
        this-> userId = id;
    }
    virtual void displayRole(){ // virtual is a type of funtion used in poly morphism where it expects the dervied class to redefine the values;
        cout<<"Generic user"<<endl;
    }
    string getname(){return name;}
    int getid() {return userId;}
};

// now lets create a derived class which inherits the attributes from parents class;

class Student :public User{
    public :
    Student(string n, int id) : User(n , id){}

    //overriding the virtual funtion or  redefining it 

    void displayRole() override {
        cout<<"Role: Student"<<endl;
    }
};

// another derived class that is librarian;

class Librarian : public User{
    public:
    Librarian(string n, int id) : User(n , id){}

    //overriding virtual func again 

    void displayRole() override{
        cout<<"Role : Librarian"<<endl;
    }
};

//class library 
// concept we use here is abstraction whose basic use case is to hide data which is not be disclosed and show important data or attributes;

class Library{
    private:
    vector<Book> books;
    //list of books (encapsulation)

    public:
    void addBook(Book b){
        books.push_back(b);
    }

    void showBooks(){
        cout << "\n -- Library books ---";
        for( auto &book : books ){
            book.displayBook();
        } 
    }
    void issueBook(int bookId){
        for(auto &book : books){
            if(book.getId() == bookId){
                if(!book.getstatus()){
                    book.issueBook();

                    cout<<"Book sucessfully issued\n";

                }else{
                    cout<<"book already issued! \n";
                }
                return;
            }
        }
        cout<<"book not found! \n";
    }
    void returnBook(int bookId){
        for(auto &book : books){
            if(book.getId() == bookId){
                if(book.getStatus()){
                    book.returnBook();
                    cout<<"book return successfully!\n";
                }else{
                     cout<< "book was not issued\n";
                }
                return;
            }
        }
        cout<<"book not found!\n";
    }
};


//main funtion 

int main(){
    Library lib;

    lib.addBook(Book(1, "White Nights", "Dostevesky"));
    lib.addBook(Book(2, "letters to Melina", "Franz Kafka"));

    //demonstration of poly morph ism

    Student s1( "nithin", 101);
    Librarian l1("awaiz ", 502);

    cout<<s1.getname()<<"->";
    s1.displayRole();

    cout<<l1.getname<<"->";
    l1.displayRole();


    lib.showBooks();

    lib.issueBook(2);
    lib.showBooks();

    lib.returnBook(2);
    lib.showBooks();

    return 0;
}

