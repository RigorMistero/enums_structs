#include <iostream>
#include <cstring>

struct address
{
std::string City;
std::string Street;
int house;
int apartment;
int index;
};

void print_address (address& add)
{
    std::cout << "City: "   << add.City;
    std::cout << std::endl;

    std::cout << "Street: " << add.Street;
    std::cout << std::endl;

    std::cout << "House: "  << add.house;
    std::cout << std::endl;

    std::cout << "Apartment: " << add.apartment;
    std::cout << std::endl;

    std::cout << "Index: "  << add.index;
    std::cout << std::endl;
}

int main(int argc, char** argv)
{

    address addr_1 {"Moscow", "Arbat", 12, 8, 123456};
    print_address (addr_1);

    std::cout << std::endl;

    address addr_2 {"Izhevsk", "Pushkin", 59, 143, 953769};
    print_address (addr_2);

    return EXIT_SUCCESS;
}
