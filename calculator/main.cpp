#include "widget.h"
#include <QApplication>
#include <iostream>

class Matter
{
public:
    Matter(int id)
        : _identifier(id)
    {
        std::cout << " Matter for " << _identifier << " created\n";
    }
    ~Matter()
    {
        std::cout << " Matter in " << _identifier << " annihilated\n";
    }

private:
    const int _identifier;
};

class World
{
public:
    World(int id)
        : _identifier(id), _matter(_identifier)
    {
        std::cout << "Hello form world" << _identifier << ".\n";
    }
    ~World()
    {
        std::cout << "Goodbye from world" << _identifier << ".\n";
    }
private:
    const int _identifier;
    const Matter _matter;
};

World theNiverse(1);

int main(int argc, char *argv[])
{
    World smallWorld(2);

    return 0;
}
