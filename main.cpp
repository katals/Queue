#include "Queue.cpp"
#include "Student.cpp"

int main() {
    printf("Hello World!\n");
    Queue<Student> students;
    Student newStudent("John", 16, "mate");
    Student newStudent2("Juana", 18, "Física");
    students.enqueue(newStudent);
    students.enqueue(newStudent2);
    students.enqueue(newStudent);
    students.display();

    std::cout << students.dequeue() << "ha sido eliminado" << std::endl;

    students.display();
    std::cout << students.peekFront() << std::endl;
    std::cout << students.peekRear() << std::endl;
}