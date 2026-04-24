# include <iostream>
# include <string>
using namespace std;    // don't like this :(

// base class
class Character {
    private:
        string name;
        int age;
    public:
        // constructors / destructor
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
        // constructors / destructor
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

class Alien : virtual public Character{
    private:
        string planetOrigin;
        string specialPower;
    public:
        // constructors / destructor
        Alien();
        Alien(string, string);
        ~Alien();

        // getters
        string getPlanet();
        string getPower();

        // setters
        void setPlanet(string);
        void setPower(string);

        // helper
        void displayAlienTraits();
        void usePower();
};

Alien :: Alien()    {
    this-> planetOrigin = "Unknown";
    this-> specialPower = "Unknown";
}

Alien :: Alien(string planetOrigin, string specialPower)    {
    this-> planetOrigin = planetOrigin;
    this-> specialPower = planetOrigin;
}

Alien :: ~Alien()   {}; // precaution

string Alien :: getPlanet() {
    return planetOrigin;
}

string Alien :: getPower() { 
    return specialPower;
}

void Alien :: setPlanet(string planetOrigin) { 
    this->planetOrigin = planetOrigin;
    return;
}
void Alien :: setPower(string specialPower) { 
    this->specialPower = specialPower;
    return; 
}

void Alien :: displayAlienTraits() {
    cout << "=== Alien Information ===" << endl;
    displayCharacterInfo();
    cout << "Planet of Origin: " << planetOrigin << endl;
    cout << "Special Power   : " << specialPower << endl;
    return;
}

void Alien :: usePower() {
    cout << getName() << " uses " << specialPower << " to unleash a blazing attack!" << endl;
    return;
}

class HumanAlienCombo : public Human, public Alien {
    private:
        int omnitrixID;
        string omnitrixVersion;
    public:
        // constrictors / destructor
        HumanAlienCombo();
        HumanAlienCombo(string, int, string, string, string, string, int, string);
        ~HumanAlienCombo();

        // getters
        int getOmnitrixID();
        string getOmnitrixVersion();

        // setters
        void setOmnitrixID(int);
        void setOmnitrixVersion(string);

        // helpers
        void displayHybridProfile();
        void activateOmnitrix();
        void displayAbilities();
};

HumanAlienCombo :: HumanAlienCombo() : Character(), Human(), Alien()   {
    this-> omnitrixID = 0;
    this-> omnitrixVersion = "Unknown";
}

HumanAlienCombo :: HumanAlienCombo(string name, int age, string nationality, string profession, 
    string planetOrigin, string specialPower, int omnitrixID, string omnitrixVersion) : Character(name, age),
    Human(nationality, profession), Alien(planetOrigin, specialPower)   {
    this-> omnitrixID = omnitrixID;
    this-> omnitrixVersion = omnitrixVersion;
}

HumanAlienCombo::~HumanAlienCombo() {}  // precaution
 
int HumanAlienCombo :: getOmnitrixID() { 
    return omnitrixID;
}

string HumanAlienCombo :: getOmnitrixVersion() { 
    return omnitrixVersion;
}

void HumanAlienCombo :: setOmnitrixID(int omnitrixID)   {
    this->omnitrixID = omnitrixID;
    return;
}

void HumanAlienCombo :: setOmnitrixVersion(string omnitrixVersion) { 
    this->omnitrixVersion = omnitrixVersion;
    return;
}

void HumanAlienCombo :: displayHybridProfile() {
    cout << "=== Ben10 Hybrid Profile (Fixed Diamond) ===" << endl;
    displayCharacterInfo();                          // single copy via virtual inheritance
    cout << "Nationality : " << getNationality() << endl;
    cout << "Profession : " << getProfession() << endl;
    cout << "Planet Origin : " << getPlanet() << endl;
    cout << "Special Power : " << getPower() << endl;
    cout << "Omnitrix ID : " << omnitrixID << endl;
    cout << "Omnitrix Version : " << omnitrixVersion << endl;
    return;
}
 
void HumanAlienCombo :: activateOmnitrix() {
    cout << "Omnitrix activated -- transformation sequence initiated!" << endl;
    return;
}
 
void HumanAlienCombo :: displayAbilities() {
    think();
    usePower();
    activateOmnitrix();
    return;
}