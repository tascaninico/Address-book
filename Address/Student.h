#pragma once
#include <list>
#include "Person.h"

//����� ��� ����������� "��������"
class Student: public Person
{
private:
	//����� ������
	string group;
	//���������
	string faculty;
public:
	//����������� �� ���������
	Student();
	//����������� � ��������� ����������
	Student(string firstName_new, string lastName_new, string phone_new, string address_new,
		string group_new, string faculty_new);
	//��������� ���� ����������
	string getAll() override;
};

