

#include <iostream>

using namespace std;

struct stAddress
{

	string street;
	string POBOX;


};


struct stOwner
{
	string name;
	string Phone;
	stAddress Address;
};

struct car
{
	string Model;
	string brand;
	int year;
	stOwner Owner;




};

int main()
{
	car Mycar;

	Mycar.brand = "BMW";
	Mycar.Model = "MX5";
	Mycar.year = 2023;
	Mycar.Owner.name = "Ibrahim Imad";
	Mycar.Owner.Phone = "98767676";
	Mycar.Owner.Address.street = "street1";
	Mycar.Owner.Address.POBOX = "BOX2";

	cout << Mycar.brand << " " << Mycar.Model << " " << Mycar.year << "\n";
	cout << Mycar.Owner.name << " " << Mycar.Owner.Phone << "\n";
	cout << Mycar.Owner.Address.street << " " << Mycar.Owner.Address.POBOX << "\n";

	return 0;
}

