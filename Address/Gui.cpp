#include "Gui.h"
#include <fstream>

//Реализация методов класса Gui
Gui::Gui() {}

void Gui::MainMenu() {

	string n;
	cout << "Выберите пункт меню" << endl;
	cout << "1.  Получить всю адресную книгу" << endl;
	cout << "2.  Получить только список коллег" << endl;
	cout << "3.  Получить только список родственников" << endl;
	cout << "4.  Получить только список студентов" << endl;
	cout << "5.  Получить только список преподавателей" << endl;
	cout << "6.  Добавить коллегу" << endl;
	cout << "7.  Добавить родственника" << endl;
	cout << "8.  Добавить студента" << endl;
	cout << "9.  Добавить преподавателя" << endl;
	cout << "10. Сохранить все в файл" << endl;
	cout << "11. Выйти из программы" << endl;
	getline(cin, n);
	switch (stoi(n))
	{
	case(1):
		system("cls");
		getAll();
		break;
	case(2):
		system("cls");
		getColleagues();
		break;
	case(3):
		system("cls");
		getFamilies();
		break;
	case(4):
		system("cls");
		getStudents();
		break;
	case(5):
		system("cls");
		getTeachers();
		break;
	case(6):
		system("cls");
		setColleague();
		break;
	case(7):
		system("cls");
		setFamily();
		break;
	case(8):
		system("cls");
		setStudent();
		break;
	case(9):
		system("cls");
		setTeacher();
		break;
	case(10):
		system("cls");
		saveFile();
		break;
	case(11):
		system("pause");
		break;
	default:
		cout << "Такой командны не существует" << endl;
		system("pause");
		system("cls");
		MainMenu();
		break;
	}
}

void Gui::addColleague(Colleague colleague) {
	colleaguies.push_back(colleague);
}

void Gui::addFamily(Family family) {
	families.push_back(family);
}

void Gui::addStudent(Student student) {
	students.push_back(student);
}

void Gui::addTeacher(Teacher teacher) {
	teachers.push_back(teacher);
}

void Gui::getAll() {
	string n;
	for (Colleague n: colleaguies) {
		cout << n.getAll() << endl;
	}
	for (Family n : families) {
		cout << n.getAll() << endl;
	}
	for (Student n : students) {
		cout << n.getAll() << endl;
	}
	for (Teacher n : teachers) {
		cout << n.getAll() << endl;
	}
	cout << "Нажмите 0, чтобы перейти в главное меню" << endl;
	getline(cin, n);
	if (stoi(n) == 0) {
		system("cls");
		MainMenu();
	}
	else {
		cout << "Такой командны не существует" << endl;
		system("pause");
		system("cls");
		getAll();
	}
}

void Gui::getColleagues() {
	string n;
	for (Colleague n : colleaguies) {
		cout << n.getAll() << endl;
	}
	cout << "Нажмите 0, чтобы перейти в главное меню" << endl;
	getline(cin, n);
	if (stoi(n) == 0) {
		system("cls");
		MainMenu();
	}
	else {
		cout << "Такой командны не существует" << endl;
		system("pause");
		system("cls");
		getColleagues();
	}
}

void Gui::getFamilies() {
	string n;
	for (Family n : families) {
		cout << n.getAll() << endl;
	}
	cout << "Нажмите 0, чтобы перейти в главное меню" << endl;
	getline(cin, n);
	if (stoi(n) == 0) {
		system("cls");
		MainMenu();
	}
	else {
		cout << "Такой командны не существует" << endl;
		system("pause");
		system("cls");
		getFamilies();
	}
}

void Gui::getStudents() {
	string n;
	for (Student n : students) {
		cout << n.getAll() << endl;
	}
	cout << "Нажмите 0, чтобы перейти в главное меню" << endl;
	getline(cin, n);
	if (stoi(n) == 0) {
		system("cls");
		MainMenu();
	}
	else {
		cout << "Такой командны не существует" << endl;
		system("pause");
		system("cls");
		getStudents();
	}
}

void Gui::getTeachers() {
	string n;
	for (Teacher n : teachers) {
		cout << n.getAll() << endl;
	}
	cout << "Нажмите 0, чтобы перейти в главное меню" << endl;
	getline(cin, n);
	if (stoi(n) == 0) {
		system("cls");
		MainMenu();
	}
	else {
		cout << "Такой командны не существует" << endl;
		system("pause");
		system("cls");
		getTeachers();
	}
}

void Gui::setColleague() {
	string firstName_new, lastName_new, phone_new, address_new,
		placeWork_new, post_new;
	cout << "Введите имя:\n";
	getline(cin, firstName_new);
	cout << "Введите фамилию:\n";
	getline(cin, lastName_new);
	cout << "Введите номер телефона:\n";
	getline(cin, phone_new);
	cout << "Введите адрес:\n";
	getline(cin, address_new);
	cout << "Введите место работы:\n";
	getline(cin, placeWork_new);
	cout << "Введите должность:\n";
	getline(cin, post_new);
	addColleague(Colleague(firstName_new, lastName_new, phone_new,
		address_new, placeWork_new, post_new));
	cout << "Коллега добавлен в адресную книгу" << endl;
	system("pause");
	system("cls");
	MainMenu();
}

void Gui::setFamily() {
	string firstName_new, lastName_new, phone_new, address_new,
		type_new;
	cout << "Введите имя:\n";
	getline(cin, firstName_new);
	cout << "Введите фамилию:\n";
	getline(cin, lastName_new);
	cout << "Введите номер телефона:\n";
	getline(cin, phone_new);
	cout << "Введите адрес:\n";
	getline(cin, address_new);
	cout << "Какой это член семьи:\n";
	getline(cin, type_new);
	addFamily(Family(firstName_new, lastName_new, phone_new,
		address_new, type_new));
	cout << "Член семьи добавлен в адресную книгу" << endl;
	system("pause");
	system("cls");
	MainMenu();
}

void Gui::setStudent() {
	string firstName_new, lastName_new, phone_new, address_new,
		group_new, faculty_new;
	cout << "Введите имя:\n";
	getline(cin, firstName_new);
	cout << "Введите фамилию:\n";
	getline(cin, lastName_new);
	cout << "Введите номер телефона:\n";
	getline(cin, phone_new);
	cout << "Введите адрес:\n";
	getline(cin, address_new);
	cout << "Введите номер группы:\n";
	getline(cin, group_new);
	cout << "Введите факультет:\n";
	getline(cin, faculty_new);
	addStudent(Student(firstName_new, lastName_new, phone_new,
		address_new, group_new, faculty_new));
	cout << "Студент добавлен в адресную книгу" << endl;
	system("pause");
	system("cls");
	MainMenu();
}

void Gui::setTeacher() {
	string firstName_new, lastName_new, phone_new, address_new,
		subject_new, post_new, n;
	bool circle = true;
	cout << "Введите имя:\n";
	getline(cin, firstName_new);
	cout << "Введите фамилию:\n";
	getline(cin, lastName_new);
	cout << "Введите номер телефона:\n";
	getline(cin, phone_new);
	cout << "Введите адрес:\n";
	getline(cin, address_new);
	cout << "Введите предмет, который ведет преподаватель:\n";
	getline(cin, subject_new);
	cout << "Введите степень преподавателя:\n";
	getline(cin, post_new);
	Teacher teacher = Teacher(firstName_new, lastName_new, phone_new,
		address_new, subject_new, post_new);
	while (circle) {
		cout << "1. Добавить студента" << endl;
		cout << "2. Выйти в главное меню" << endl;
		getline(cin, n);
		switch (stoi(n))
		{
		case(1):
			system("cls");
			addStudentToTeacher(&teacher);
			break;
		case(2):
			addTeacher(teacher);
			cout << "Преподаватель добавлен в адресную книгу" << endl;
			circle = false;
			break;
		default:
			cout << "Такой командны не существует" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	system("cls");
	MainMenu();
}

void Gui::addStudentToTeacher(Teacher *teacher) {
	string phone_student;
	bool check_s = false;
	cout << "Введите номер телефона студента: ";
	getline(cin, phone_student);
	for (Student student : students) {
		if (student.getPhone() == phone_student) {
			check_s = true;
			teacher->addStudent(student);
		}
	}
	if (!check_s) {
		cout << "Студента с данным номером нет" << endl;
		system("pause");
		system("cls");
		addStudentToTeacher(teacher);
	}
	else {
		cout << "Студент добавлен в адресную книгу к преподавателю" << endl;
	}
}

void Gui::saveFile() {
	ofstream out;
	out.open("../file.txt");
	if (out.is_open()) {
		for (Colleague n : colleaguies) {
			out << n.getAll() << endl;
		}
		for (Family n : families) {
			out << n.getAll() << endl;
		}
		for (Student n : students) {
			out << n.getAll() << endl;
		}
		for (Teacher n : teachers) {
			out << n.getAll() << endl;
		}
		cout << "Сохранение в файл прошло успешно" << endl;
		system("pause");
		system("cls");
		MainMenu();
	}
	else {
		cout << "Ошибка открытия файла" << endl;
		system("pause");
		system("cls");
		MainMenu();
	}
	
}