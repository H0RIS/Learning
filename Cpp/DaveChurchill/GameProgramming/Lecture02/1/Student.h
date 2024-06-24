#pragma once
#include <iostream>

class Student
{
private:
	std::string m_first	{ "First" };
	std::string m_last	{ "Last" };
	int			m_id	{ 0 };
	float		m_avg	{ 0.0f };

public:
	Student();
	Student(const std::string & first, const std::string & last, const int& id, const float& avg);

	std::string GetFirst()	const;
	std::string GetLast()	const;
	int			GetId()		const;
	float		GetAvg()	const;

	void Print() const;
};