#include "Student.h"

std::ostream& operator<<(std::ostream &strm, const Student &student) {
    return strm << "student (" << student.name << "," << student.age  << "," << student.subject << ")";
}

inline int Student::getAge() const {
  return age;
}

inline void Student::setAge(int age) {
  age = age;
}

inline std::string Student::getName() const {
  return name;
}

inline void Student::setName(std::string name) {
  name = name;
}

inline std::string Student::getSubject() const {
  return subject;
}

inline void Student::setSubject(std::string subject) {
  subject = subject;
}