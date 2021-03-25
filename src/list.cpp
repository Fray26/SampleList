#include "include/list.h"


void List::print_menu()
{
    int choice;

    std::cout << "\n**************************\n";
    std::cout << " 1 - Print List.\n";
    std::cout << " 2 - Add to list.\n";
    std::cout << " 3 - Delete from list.\n";
    std::cout << " 4 - Quit.\n";
    std::cout << "\n Enter your choice and press Enter: \n";

    std::cin >> choice;

    if (choice ==  1)
    {
        print_list();
    }
    else if (choice == 2)
    {
        add_item();
    }
    else if (choice == 3)
    {
        delete_item();
    }
    else if (choice == 4)
    {
        exit(0);
    }
    else
    {
        std::cout << "Sorry choice not implemented yet\n";
    }
}

void List::print_list()
{
    std::cout << "\n\n";
    std::cout << "\n*** Printing List ***\n";

    for (int list_index = 0; list_index < (int)list.size(); list_index++)
    {
        std::cout << " * " << list[list_index] << "\n";
    }

    std::cout << "\nM - Menu \n";
    char choice;
    std::cin >> choice;

    if (choice == 'M' || choice == 'm')
    {
        print_menu();
    }
    else
    {
        std::cout << "Invalid Choice. Quitting.. \n";
    }
}

void List::add_item()
{
    std::cout << "\n\n";
    std::cout << "*** Add Item ***\n";
    std::cout << "Type in an item and press Enter: ";

    std::string item;
    std::cin >> item;

    list.push_back(item);

    std::cout << "Successfully added an item to the list \n\n\n\n";
    std::cin.clear();

    print_menu();
}

void List::delete_item()
{
    std::cout << "\n*** Delete Item ***\n";
    std::cout << "\nSelect an item index number to delete\n";
    if (list.size())
    {
        for (int i=0; i < (int)list.size(); i++)
        {
            std::cout << i << ": " << list[i] << "\n";
        }
        int choiceNum;
        std::cin >> choiceNum;
        list.erase(list.begin()+choiceNum);
    }
    else
    {
        std::cout << "No items to delete. \n";
    }

    print_menu();
}