#ifndef MONSTER_HPP
#define MONSTER_HPP

#include <format>

#include "character.hpp"

namespace factory
{
class Monster final : public Character
{
public:
    [[nodiscard]] std::string getName() const override
    {
        return _name;
    }

    [[nodiscard]] std::string getMonsterName() const
    {
        return std::format("Monster : {} ({})", _name, getUid());
    }

private:
    std::string _name {"Monster"};
};
}

#endif //MONSTER_HPP
