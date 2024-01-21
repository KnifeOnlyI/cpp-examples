#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

namespace factory
{
class Character
{
public:
    Character() : _uid {_nextUID++}
    {
    }

    virtual ~Character() = default;

    [[nodiscard]] int getUid() const
    {
        return _uid;
    }

    [[nodiscard]] virtual std::string getName() const = 0;

private:
    inline static int _nextUID = 1;

    int _uid;
};
}

#endif //CHARACTER_HPP
