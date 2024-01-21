#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <format>

#include "character.hpp"

namespace factory
{
class Player final : public Character
{
public:
    [[nodiscard]] std::string getName() const override
    {
        return _name;
    }

    [[nodiscard]] std::string getPlayerName() const
    {
        return std::format("Player : {} ({})", _name, getUid());
    }

private:
    std::string _name {"Player"};
};
}

#endif //PLAYER_HPP
