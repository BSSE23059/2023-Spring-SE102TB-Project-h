#ifndef PERSONS_H
#define PERSONS_H
#include"person.h"
#include <vector>
#include "polling.h"
class Persons:public Person{
    private:
    vector <Person> persons;
    Persons(){}
    static Persons *instance;
    public:
        static Persons *getInstance() {
            if (instance == nullptr) {
                instance = new Persons();
            }
            return instance;
        }
    void display()const ;
    void displayperson(string cnic) const;
    void addPersons(const Person &per);
    string searchPerson(string cnic);
    void loadPersonsFromJsonFile(const string filename);
    void changeHasVoted(const string cninc);
    
};




#endif