#ifndef FACTORY_EXAMPLE_HPP
#define FACTORY_EXAMPLE_HPP

#include <format>
#include <iostream>

#include "developer.hpp"
#include "factory/character_factory.hpp"
#include "factory/player.hpp"
#include "factory/monster.hpp"

namespace factory
{
inline void factoryExample()
{
    // Instantiate the character factory.
    CharacterFactory characterFactory;

    // Create a player, monster and developer with same method in character factory.
    // The CharacterFactory::create method returns a reference to an instance of base class (Character) and
    // dynamic_cast allow developer to cast to the real type (derived class : Player, Monster or Developer).
    // The CharacterFactory::create method can take parameters to initialize the derived class.
    const auto &player = dynamic_cast<Player &>(characterFactory.create<Player>());
    const auto &monster = dynamic_cast<Monster &>(characterFactory.create<Monster>());
    const auto &developer = dynamic_cast<Developer &>(characterFactory.create<Developer>(15));

    // We can use the specific methods of the derived classes.
    std::cout << player.getPlayerName() << std::endl;
    std::cout << monster.getMonsterName() << std::endl;
    std::cout << developer.getDeveloperName() << std::endl;
}
}

#endif //FACTORY_EXAMPLE_HPP
