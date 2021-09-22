#pragma once
#include "Teacher.h"
#include "Student.h"
#include "Family.h"
#include "Colleague.h"

//класс для интерфейса
class Gui
{
private:
	//список коллег
	list<Colleague> colleaguies;
	//список членов семьи
	list<Family> families;
	//список студентов
	list<Student> students;
	//список учителей
	list<Teacher> teachers;
public:
	//конструктор
	Gui();
	//основное меню
	void MainMenu();
	//добавление "коллеги"
	void addColleague(Colleague colleague);
	//добавление "члена семьи"
	void addFamily(Family family);
	//добавление "студента"
	void addStudent(Student student);
	//добавление "учителя"
	void addTeacher(Teacher teacher);
	//получение всей адресной книги
	void getAll();
	//получение списка всех "коллег"
	void getColleagues();
	//получение списка всех "членов семьи"
	void getFamilies();
	//получение списка всех "студентов"
	void getStudents();
	//получения списка всех "преподавателей"
	void getTeachers();
	//добавление "коллеги"
	void setColleague();
	//добавление "члена семьи"
	void setFamily();
	//добавление "студента"
	void setStudent();
	//добавление "преподавателя"
	void setTeacher();
	//добавление "студента" "преподавателю"
	void addStudentToTeacher(Teacher *teacher);
	//сохранение в файл
	void saveFile();
};
