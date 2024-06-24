#include <iostream>
#include "Student.h"
#include "Course.h"

int main()
{
	
	Student student1;
	Student student2 { "John", "Doe", 123, 1.1f };
	const Student student3 { "Jane", "Doe", 123456789, 99.0f };

	student1.Print();
	student2.Print();
	student3.Print();

	Course my_course { "CourseH" };

	my_course.AddStudent(student2);
	my_course.AddStudent(student3);
	my_course.AddStudent(Student { "Foo", "Bar", 1, 50 });

	my_course.Print();

	Course course_from_file("CourseF");
	course_from_file.LoadFromFile("students.txt");

	course_from_file.Print();

	return 0;
}