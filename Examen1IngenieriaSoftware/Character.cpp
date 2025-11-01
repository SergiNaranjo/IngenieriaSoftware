#include "Character.h"
#include <unordered_set>

static std::unordered_set<Character*> transformedSet;

Character::Character(std::string name) : name(name) {}

void Character::AddFriend(Character* friendChar) 
{
    friends.push_back(friendChar);
}

void Character::AddMiraculous(Miraculous* m) 
{
    miraculous.push_back(m);
}

void Character::Update(float dt) 
{
    for (auto m : miraculous)
    {
        m->Update(dt);
    }   
}

void Character::Transform(bool value) 
{
    if (transformedSet.count(this))
    {
        return;
    }

    transformedSet.insert(this);

    for (auto m : miraculous)
    {
        m->SetActive(value);
    }

    if (value) 
    {
        for (auto f : friends)
        {
            f->Transform(true);
        }    
    }

    if (transformedSet.size() == 1)
    {
        transformedSet.clear();
    }
}

void Character::UseSkill() 
{
    for (auto m : miraculous)
    {
        m->UsePower();
    }   
}