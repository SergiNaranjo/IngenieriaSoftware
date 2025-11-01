#pragma once

#include <vector>
#include <string>
#include "Miraculous.h"

class Character
{
	std::string name;
	std::vector<Miraculous*> miraculous;
	std::vector<Character*> friends;

public:
	Character(std::string name);

	void AddFriend(Character* friendChar);
	void AddMiraculous(Miraculous* m);
	void Update(float dt);
	void Transform(bool value);
	void UseSkill();
};

