#include "administrator.h"
#include <iostream>

Administrator::Administrator(const std::string &name, int id, const std::string &contactInfo)
    : User(name, id, contactInfo), numUsers(0) {}

void Administrator::addUser(User *user)
{
    if (numUsers < 10)
    {
        users[numUsers++] = user;
        std::cout << user->getName() << " added by admin." << std::endl;
    }
    else
    {
        std::cout << "User limit reached. Cannot add more users." << std::endl;
    }
}

void Administrator::removeUser(int userId)
{
    bool found = false;
    for (int i = 0; i < numUsers; ++i)
    {
        if (users[i]->getId() == userId)
        {
            // Shift users to maintain the list
            for (int j = i; j < numUsers - 1; ++j)
            {
                users[j] = users[j + 1];
            }
            --numUsers;
            std::cout << "User with ID " << userId << " removed." << std::endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        std::cout << "User with ID " << userId << " not found." << std::endl;
    }
}

void Administrator::viewDetails() const
{
    std::cout << "Administrator: " << name << std::endl;
    std::cout << "Managed Users: ";
    for (int i = 0; i < numUsers; ++i)
    {
        std::cout << users[i]->getName() << " ";
    }
    std::cout << std::endl;
}
