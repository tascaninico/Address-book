#include <iostream>
#include <windows.h>
#include "Gui.h"

//Запуск приложения
int main()
{
    //руссификация на вывод
    setlocale(0, "");
    //руссификация на ввод
    SetConsoleCP(1251);
    //экземпляр класса Gui
    Gui gui = Gui();
    //добавление данных в адресную книгу
    Colleague colleague1 = Colleague("Александр", "Ерошкин",
        "+79242557580", "г. Санкт-Петербург БЦ Феникс", "СИГМА-ИТ",
        "Директор");
    Family family1 = Family("Глеб", "Сафонов", "+79564532168",
        "г. Уссурийск ул. Ушакова 5Б", "Брат");
    Family family2 = Family("Александр", "Полицинский", "+79568451368",
        "г. Санкт-Петербург ул. Автоново-Овсеенко 35", "Дядя");
    Student student1 = Student("Марина", "Шакурова", "+79564521358",
        "г. Воркута ул. Ленина 43", "7371", "ФКТИ");
    Student student2 = Student("Давид", "Хачатуров", "+76666666666",
        "г. Уссурийск ул. Францева 12", "7371", "ФКТИ");
    Teacher teacher1 = Teacher("Олег", "Фомин", "+79999999999",
        "г. Санкт-Петербург ул. Попова 66", "Логистика", "Доктор наук");
    teacher1.addStudent(student1);
    gui.addColleague(colleague1);
    gui.addFamily(family1);
    gui.addFamily(family2);
    gui.addStudent(student1);
    gui.addStudent(student2);
    gui.addTeacher(teacher1);
    //запуск основного меню
    gui.MainMenu();
}