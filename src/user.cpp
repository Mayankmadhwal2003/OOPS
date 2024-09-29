#include "user.h"
#include <iostream>

User::User(const std::string &name, int id, const std::string &contactInfo)
    : name(name), id(id), contactInfo(contactInfo) {}

std::string User::getName() const { return name; }

std::string User::getContact() const { return contactInfo; }

int User::getId() const { return id; }

User::~User() {}
