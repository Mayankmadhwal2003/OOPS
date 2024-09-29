#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "user.h"

class Administrator : public User
{
private:
    User *users[10]; // Fixed-size array for up to 10 users
    int numUsers;

public:
    Administrator(const std::string &name, int id, const std::string &contactInfo);
    void addUser(User *user);
    void removeUser(int userId);
    virtual void viewDetails() const override;
};

#endif
