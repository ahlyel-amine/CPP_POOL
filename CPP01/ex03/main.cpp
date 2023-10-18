#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

// int main()
// {
//     {
//         Weapon club = Weapon("🔪");
//         std::cout << "weapon : " << &club << std::endl;
//         HumanA bob("Bob", club);
//         bob.attack();
//         club.setType("⚔️");
//         bob.attack();
//     }
//     {
//         Weapon club = Weapon("🔪");
//         HumanB jim("Jim");
//         // jim.setWeapon(club);
//         jim.attack();
//         club.setType("⚔️");
//         jim.attack();
//     }
//     return 0;
// }

int main()
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return 0;
}