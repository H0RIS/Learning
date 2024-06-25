#include "Course.h"

Course::Course() {}

Course::Course(const std::string& name)
    : m_name { name }
{
}

void Course::AddStudent(const Student& student)
{
    m_students.push_back(student);
}

const std::vector<Student>& Course::GetStudents() const
{
    return m_students;
}

void Course::Print() const
{
    for (auto& student : m_students)
    {
        student.Print();
    }
}

void Course::LoadFromFile(const std::string& filename)
{
    std::ifstream   file_in { filename };
    std::string     first   { };
    std::string     last    { };
    int             id      { };
    float           avg        { };

    while (file_in >> first)
    {
        file_in >> last >> id >> avg;

        AddStudent(Student{ first, last, id, avg });
    }

}
