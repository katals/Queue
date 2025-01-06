#include "Stack.cpp"
#include "Student.h"

int main() {
    printf("Hello World!\n");
    Stack<Student> students;
    Student newStudent("John", 16, "mate");
    Student newStudent2("Juana", 18, "Física");
    students.push(newStudent);
    students.push(newStudent2);
    students.push(newStudent);
    students.display();

    std::cout << students.pop() << "ha sido eliminado" << std::endl;

    students.display();
    std::cout << students.peekFront() << std::endl;
    std::cout << students.peekRear() << std::endl;
    std::cout << students.getSize() << std::endl;

}