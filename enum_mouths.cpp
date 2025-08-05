#include <iostream>
#include <cstring>

enum Monthname
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main(int argc, char** argv)
{

    int user_input{};

do
{
   std::cout << "Input the month's number: ";
   std::cin  >> user_input;

    if (user_input == 0) {std::cout << "Goodbye!";  break;}
    if (user_input > 12 || user_input < 0) {std::cout << "ERROR! Only 12 months in the year" << std::endl; break;}

   switch (user_input)
   {
        case Monthname::January:    std::cout << "January." << std::endl; break;
        case Monthname::February:   std::cout << "February." << std::endl; break;
        case Monthname::March:      std::cout << "March." << std::endl; break;
        case Monthname::April:      std::cout << "April." << std::endl; break;
        case Monthname::May:        std::cout << "May." << std::endl; break;
        case Monthname::June:       std::cout << "June." << std::endl; break;
        case Monthname::July:       std::cout << "July." << std::endl; break;
        case Monthname::August:     std::cout << "August." << std::endl; break;
        case Monthname::September:  std::cout << "September." << std::endl; break;
        case Monthname::October:    std::cout << "October." << std::endl; break;
        case Monthname::November:   std::cout << "November." << std::endl; break;
        case Monthname::December:   std::cout << "December." << std::endl; break;

        default: break;
    }

}while (user_input != 0);

    return EXIT_SUCCESS;
}
