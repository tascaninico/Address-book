#pragma once
#include "Person.h"

//����� ��� ����������� "������ �����"
class Family: public Person
{
private:
	//"���" ����� ����� (����, ������ � �.�.)
	string type;
public:
	//�����������
	Family(string firstName_new, string lastName_new, string phone_new, string address_new, string type_new);
	//��������� ���� ����������
	string getAll() override;
};

