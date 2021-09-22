#pragma once
#include "Person.h"

//����� ��� ����������� "������"
class Colleague: public Person
{
private:
	//����� ������
	string placeWork;
	//���������
	string post;
public:
	//�����������
	Colleague(string firstName_new, string lastName_new, string phone_new, string address_new, 
		string placeWork_new, string post_new);
	//��������� ���� ����������
	string getAll() override;
};

