#include <iostream>

#include "Tikki.h" 
#include "Nooroo.h" 
#include "Character.h" 

int main()
{
	Character ladybug("Ladybug");
	Character catnoir("Cat Noir");

	ladybug.AddFriend(&catnoir);
	catnoir.AddFriend(&ladybug);

	Tikki tikki;
	Nooroo nooroo(false);

	ladybug.AddMiraculous(&tikki);
	catnoir.AddMiraculous(&nooroo);

	ladybug.Transform(true);
	ladybug.Update(1.0f);

	std::cout << "Tikki fuel: " << tikki.GetFuel() << std::endl;
	std::cout << "Nooroo fuel: " << nooroo.GetFuel() << std::endl;

	std::cout << "Tikki hungry? " << (tikki.IsHungry() ? "Yes" : "No") << std::endl;
	std::cout << "Nooroo hungry? " << (nooroo.IsHungry() ? "Yes" : "No") << std::endl;

	return 0;
}