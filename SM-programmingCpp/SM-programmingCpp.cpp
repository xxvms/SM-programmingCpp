// SM-programmingCpp.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <memory>
#include <vector>
#include <string>

class Car
{
private:
	int door;
	double power;
	std::string brand;
public:
	Car() : door(0), power(0.0), brand("n/a"){}
	void add(int door_, double power_, std::string brand_)
	{
		door = door_;
		power = power_;
		brand = brand_;
	}
};
class Garage
{
	std::vector<Car*> cars_in_garage;
	int door;
	double power;
	std::string brand;
public:
	Garage(): door(0), power(0.0), brand("n/a"){}

	void park(Car* car)
	{
		(*car).add(door, power, brand );
		cars_in_garage.push_back(car);
	}
};

int main()
{
	std::vector<Car> car1;

	std::unique_ptr<Car*> pCar;

	Garage garage1;

	garage1.park(pCar);

    return 0;
}

