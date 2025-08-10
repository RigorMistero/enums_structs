#include <iostream>
#include <cstring>

enum class Monthname
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

    int user_input_int{};

do
{
   std::cout << "Input the month's number: ";
   std::cin  >> user_input_int;



    if (user_input_int == 0) {std::cout << "Goodbye!";  break;}
    if (user_input_int > 12 || user_input_int < 0) {std::cout << "ERROR! Only 12 months in the year" << std::endl; break;}

   switch (user_input_int)
   {
        case static_cast<int>(Monthname::January) :    std::cout << "January." << std::endl; break;
        case static_cast<int>(Monthname::February):   std::cout << "February." << std::endl; break;
        case static_cast<int>(Monthname::March):      std::cout << "March." << std::endl; break;
        case static_cast<int>(Monthname::April):      std::cout << "April." << std::endl; break;
        case static_cast<int>(Monthname::May):        std::cout << "May." << std::endl; break;
        case static_cast<int>(Monthname::June):       std::cout << "June." << std::endl; break;
        case static_cast<int>(Monthname::July):       std::cout << "July." << std::endl; break;
        case static_cast<int>(Monthname::August):     std::cout << "August." << std::endl; break;
        case static_cast<int>(Monthname::September):  std::cout << "September." << std::endl; break;
        case static_cast<int>(Monthname::October):    std::cout << "October." << std::endl; break;
        case static_cast<int>(Monthname::November):   std::cout << "November." << std::endl; break;
        case static_cast<int>(Monthname::December):   std::cout << "December." << std::endl; break;

        default: break;
    }

}while (user_input_int != 0);

    return EXIT_SUCCESS;
}
