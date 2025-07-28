
#include <iostream>
using namespace std;

enum enColor { Blue, Green, Red, Yellow };
enum enGendor { Male, Female };
enum enMaritalstatus { Single, Married };

struct stAddress
{
    string Streetname;
    string POBox;
    string Zipcode;
    string BuildingNO;
};

struct stContactInfo
{
    string Phone;
    string Emal;
    stAddress Address;
};

struct stPerson
{
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;

    enMaritalstatus Maritalstatus;
    enGendor Gendor;
    enColor FavColor;

};


int main()
{
    stPerson Person1;

    Person1.FirstName = "Ibrahim";
    Person1.LastName = "Imad";
    Person1.ContactInfo.Address.BuildingNO = 1231;
    Person1.ContactInfo.Address.POBox = 344;
    Person1.ContactInfo.Address.Streetname = "My street";
    Person1.ContactInfo.Address.Zipcode = 41134;
    Person1.ContactInfo.Emal = "Epoo@gamil.com";
    Person1.ContactInfo.Phone = 7786766556;
    Person1.Gendor = enGendor::Male;
    Person1.Maritalstatus = enMaritalstatus::Married;
    Person1.FavColor = enColor::Red;

    cout << Person1.FirstName << " " << Person1.LastName << "\n";

    return 0;
}

