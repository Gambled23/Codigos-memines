#include <iostream>
#include <set>
#include <algorithm>

void print(const std::string& item)
{
    std::cout << item << std::endl;
}

int main()
{
    std::set<std::string> sortedItems;

    for(int i = 1; i <= 5; ++i)
    {
        std::string name;
        std::cout << i << ". ";
        std::cin >> name;
        sortedItems.insert(name);
    }

    std::for_each(sortedItems.begin(), sortedItems.end(), &print);
    system("PAUSE");
    return 0;
}