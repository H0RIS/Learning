#include "Student.h"

Student::Student() {}

Student::Student(const std::string& first, const std::string& last, const int id, const float avg)
    : m_first   { first }
    , m_last    { last }
    , m_id      { id }
    , m_avg     { avg }
{
}

std::string Student::GetFirst() const
{
    return m_first;
}

std::string Student::GetLast() const
{
    return m_last;
}

int Student::GetId() const
{
    return m_id;
}

float Student::GetAvg() const
{
    return m_avg;
}

void Student::Print() const
{
    std::cout << m_first << " " << m_last << " " << m_id << " " << m_avg << std::endl;
}