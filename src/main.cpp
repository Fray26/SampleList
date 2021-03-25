

#include "include/list.h"

int main(int arg_count, char *args[]) 
{
    if (arg_count > 1)
    {
        List List;
        List.name = std::string(args[1]);
        List.print_menu();
    }
    else
    {
        std::cout << "User not supplied... Goodbye!\n";
    }
}