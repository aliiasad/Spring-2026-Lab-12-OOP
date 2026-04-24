# include <iostream>
# include <string>
using namespace std;    // don't like this :(

// base class
class Character {
    private:
        string name;
        int age;
    public:
        // constructors / destructors
        Character();
        Character(string, int);
        ~Character();

        // getters
        string getName();
        int getAge();

        // setters
        void setName(string);
        void setAge(int);

        //helper
        void displayCharacterInfo();

};

Character :: Character()    {
    this-> name = "Unknown";
    age = 0;
}

Character :: Character(string name, int age)    {
    this-> name = name;
    this-> age = age;
}

Character :: ~Character()   {}; // not needed but precautionary

string Character :: getName()    {
    return name;
}

int Character :: getAge()   {
    return age;
}

void Character :: setName(string name) {
    this-> name = name;
    return;
}

void Character :: setAge(int age)   {
    this-> age = age;
    return;
}

void Character :: displayCharacterInfo()    {
    cout << "Name: " << name << endl;
    cout << "Age : " << age  << endl;
    return;
}

class Human : virtual public Character  {
    private:
        string nationality;
        string profession;
    public:
        Human();
        Human(string, string);
        ~Human();

        // getters
        string getNationality();
        string getProfession();

        // setters
        void setNationality(string);
        void setProfession(string);

        // helper
        void displayHumanTraits();
        void think();
};

Human :: Human()    {
    this-> nationality = "Unknown";
    this-> profession = "Unknown";
}

Human :: Human(string nationality, string profession)   {
    this-> nationality = nationality;
    this-> profession = profession;
}

Human :: ~Human()   {}; // not needed but precautionary

string Human :: getNationality()    {
    return nationality;
}

string Human :: getProfession() {
    return profession;
}

void Human :: setNationality(string nationality)    {
    this-> nationality = nationality;
    return;
}

void Human :: setProfession(string profession)  {
    this-> profession = profession;
    return;
}

void Human :: displayHumanTraits() {
    cout << "=== Human Information ===" << endl;
    displayCharacterInfo();
    cout << "Nationality: " << nationality << endl;
    cout << "Personality: " << profession << endl;
}

void Human :: think() {
    cout << getName() << " uses logic and human intelligence to solve problems." << endl;
}