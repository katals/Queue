//
// Created by katals on 1/6/25.
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student {
  private:
    std::string name;
    int age;
    std::string subject;
  public:
    Student(std::string name, int age, std::string subject) : name(name), age(age), subject(subject) {};
    std::string getName() const;
    int getAge() const;
    std::string getSubject() const;
    void setName(std::string name);
    void setAge(int age);
    void setSubject(std::string subject);
    friend std::ostream& operator<<(std::ostream &strm, const Student &student);
};



#endif //STUDENT_H
