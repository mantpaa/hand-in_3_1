//
// Created by Mihrr on 19/09/2016.
//

#ifndef HAND_IN_3_1_STUDENT_H
#define HAND_IN_3_1_STUDENT_H

#include <string>

/** A student is a person who attends university.
 * Is registered with a name, email and automatically incremented
 * key.
 */
class Student
{
public:
    Student() {};
    Student(std::string name, std::string eMail);

    // Accesssors
    int GetId();
    std::string GetName();
    std::string GetEMail();

    //attributes
protected:
    int id;
    static int nextId;
    std::string name;
    std::string eMail;

};

#endif //HAND_IN_3_1_STUDENT_H
