#include <iostream>
#include <vector>


class List
{
    private:

    protected:

    public:
    List()
    {
        // Constructor
    }
    ~List()
    {
        // Destructor
    }
    std::vector<std::string> list;
    std::string name;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();

};