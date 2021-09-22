#pragma once
#include <list>
#include "Person.h"
#include "Student.h"

//����� ��� ����������� "��������������"
class Teacher: public Person
{
private:
	//������� ��� �������
	string subject;
	//�������
	string post;
	//������ ���������
	list<Student> students;
public:
	//����������� �� ���������
	Teacher();
	//����������� � ��������� ����������
	Teacher(string firstName_new, string lastName_new, string phone_new, string address_new,
		string subject_new, string post_new);
	//���������� ��������
	void addStudent(Student student);
	//��������� ���� ����������
	string getAll() override;
};
