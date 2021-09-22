#pragma once
#include "Teacher.h"
#include "Student.h"
#include "Family.h"
#include "Colleague.h"

//����� ��� ����������
class Gui
{
private:
	//������ ������
	list<Colleague> colleaguies;
	//������ ������ �����
	list<Family> families;
	//������ ���������
	list<Student> students;
	//������ ��������
	list<Teacher> teachers;
public:
	//�����������
	Gui();
	//�������� ����
	void MainMenu();
	//���������� "�������"
	void addColleague(Colleague colleague);
	//���������� "����� �����"
	void addFamily(Family family);
	//���������� "��������"
	void addStudent(Student student);
	//���������� "�������"
	void addTeacher(Teacher teacher);
	//��������� ���� �������� �����
	void getAll();
	//��������� ������ ���� "������"
	void getColleagues();
	//��������� ������ ���� "������ �����"
	void getFamilies();
	//��������� ������ ���� "���������"
	void getStudents();
	//��������� ������ ���� "��������������"
	void getTeachers();
	//���������� "�������"
	void setColleague();
	//���������� "����� �����"
	void setFamily();
	//���������� "��������"
	void setStudent();
	//���������� "�������������"
	void setTeacher();
	//���������� "��������" "�������������"
	void addStudentToTeacher(Teacher *teacher);
	//���������� � ����
	void saveFile();
};
