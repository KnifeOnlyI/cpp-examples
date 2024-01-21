#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <format>

#include "character.hpp"

namespace factory
{
class Developer final : public Character
{
public:
    explicit Developer(const int coffeeCups): _coffeeCups {coffeeCups}
    {
    }

    [[nodiscard]] std::string getName() const override
    {
        return _name;
    }

    [[nodiscard]] std::string getDeveloperName() const
    {
        return std::format("Developer : {} ({}) drink {} coffee cups", _name, getUid(), _coffeeCups);
    }

private:
    int _coffeeCups;
    std::string _name {"Developer"};
};
}

#endif //DEVELOPER_HPP
