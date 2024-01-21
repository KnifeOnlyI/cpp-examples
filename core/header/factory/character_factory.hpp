#ifndef CHARACTER_FACTORY_HPP
#define CHARACTER_FACTORY_HPP

#include <memory>
#include <vector>

#include "character.hpp"

namespace factory
{
class CharacterFactory
{
public:
    template<typename T, typename... Args>
    Character &create(Args&&... args)
    {
        _characters.emplace_back(std::make_unique<T>(std::forward<Args>(args)...));

        return *_characters.back();
    }

private:
    std::vector<std::unique_ptr<Character>> _characters {};
};
}

#endif //CHARACTER_FACTORY_HPP
