#pragma once
#include <string>
#include <iostream>

using namespace std;

//����������� �����-��������
class Person
{
private:
	//���
	string firstName;
	//�������
	string lastName;
	//�������
	string phone;
	//�����
	string address;
public:
	//����������� �� ���������
	Person();
	//����������� � ��������� ����������
	Person(string firstName_new, string lastName_new, string phone_new, string address_new);
	//����� ��� ������������ ���������������
	virtual string getAll();
	//����� ��� ��������� �������� � ���
	string getPhoneAndFIO();
	//����� ��� ������������ �����
	void setFirstName(string firstName_new);
	//����� ��� ��������� �����
	string getFirstName();
	//����� ��� ������������ �������
	void setLastName(string lastName_new);
	//����� ��� ��������� �������
	string getLastName();
	//����� ��� ������������ ������ ��������
	void setPhone(string phone_new);
	//����� ��� ��������� ������ ��������
	string getPhone();
	//����� ��� ������������ ������
	void setAddress(string address_new);
	//����� ��� ��������� ������
	string getAddress();
};

