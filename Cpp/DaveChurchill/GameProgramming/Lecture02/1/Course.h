#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "Student.h"

class Course
{
private:
    std::string	m_name {"Course"};
    std::vector<Student>m_students {};

public:
    Course();
    Course(const std::string& name);

    void AddStudent(const Student& student);

    const std::vector<Student>& GetStudents() const;

    void Print() const;

    void LoadFromFile(const std::string& filename);
};