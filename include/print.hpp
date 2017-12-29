/*!
	\file
	\brief Заголовочный файл print.hpp
	\author Овчаров Анисим
	\date 15 октября 2017 года
	В данном файле задекларирована функция print с разной семантикой.
*/
#include <string>
#include <fstream>
#include <iostream>

/*!
Выводит сообщение в консоль.
\param[in] text	Текст для вывода в консоль.
\param[in] out Переопределенный опреатор вывода.
*/
void print(const std::string& text, std::ostream& out = std::cout);
/*!
Выводит сообщение в консоль.
\param[in] text	Текст для вывода в консоль.
\param[in] out Переопределенный опреатор вывода из содержимого файла.
*/
void print(const std::string& text, std::ofstream& out);
