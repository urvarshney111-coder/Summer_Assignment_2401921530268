#include <iostream>
#include <string>
using namespace std;

class KidUser {
public:
    int age;
    string bookType;

    void registerAccount() {
        if (age < 12){
            cout << "You have successfully registered under a Kids Account" << endl;
        }
        else{
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }

    void requestBook() {
        if (bookType == "Kids"){
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        }
        else{
            cout << "Oops, you are allowed to take only kids books" << endl;
        }
    }
};

class AdultUser {
public:
    int age;
    string bookType;

    void registerAccount() {
        if (age >= 12){
            cout << "You have successfully registered under an Adult Account" << endl;
        }
        else{
            cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
        }
    }

    void requestBook() {
        if (bookType == "Fiction"){
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        }
        else{
            cout << "Oops, you are allowed to take only adult Fiction books" << endl;
        }
    }
};

int main() {
    KidUser k1;
    k1.age = 10;
    k1.bookType = "Kids";
    k1.registerAccount();
    k1.requestBook();

    AdultUser a1;
    a1.age = 20;
    a1.bookType = "Fiction";
    a1.registerAccount();
    a1.requestBook();
}