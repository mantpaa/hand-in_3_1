//
// Created by Mihrr on 19/09/2016.
//
#include "student.h"
Student::Student(std::string name, std::string eMail)
{
    this->id = ++nextId;
    this->name = name;
    this->eMail = eMail;
}


int Student::GetId() {return this->id;}
std::string Student::GetName() {return this->name;}
std::string Student::GetEMail() {return this->eMail;}

int Student::nextId = 0;