
// подключаем библиотеки
#include <iostream>
#include <thread>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// подключаем пространство имен
using namespace std;

// функция предназначена для реверса строки которую она получает
string reverse(string str_n)
{
        string str_r = str_n; // создаем копию строки
        reverse(str_r.begin(), str_r.end()); // выполняем реверс строки используя функцию reverse библиотеки algoritm
        return str_r; // возвращаем измененную строку
}

void firstTheard()
{

    string line; // создаем строку 

    ifstream in("1Dir/1.txt"); // открываем файл для чтения
    ofstream fout("first.txt"); // открываем файл для записи

  if (in.is_open()) // при условии если файл для чтения открылся
    {

        fstream clear_file("first.txt", ios::out); // открываем файл очищая его
        clear_file.close(); //закрываем его

//      ofstream fout("first.txt"); // открываем файл для записи

        while (getline(in, line)) // цикл: пока можно считать строку их файла
        {
            cout << line << endl; // выводим строку считанную их файла
            cout << reverse(line) << endl; // выводим результат выполнения функции reverse, параметром которой является строка считанная из файла 
            fout << reverse(line) << endl; // записываем реверсированную строку в файл
        }
    }
    in.close();     // закрываем файл для считывания
    fout.close();       // закрываем файл для записи

/////////////////////////

    fstream clear_file2("1Dir/1.txt", ios::out); // открываем файл очещая его
    clear_file2.close(); //закрываем его

ifstream in2("first.txt"); // окрываем файл для чтения
    ofstream fout2("1Dir/1.txt"); // открываем файл для записи по указанному пути
if (in2.is_open()) // при условии если файл открылся
    {
      while (getline(in2, line)) // пока можно считать строку
        {
                    fout2 << line << endl; // записываем считанную строку в файл
        }
    }
    in2.close();     // закрываем файл для считывания
    fout2.close();       // закрываем файл для записи

    cout << "End of theard" << endl; // выводим строку, уведомляющую что поток закрыся
}

void secondThread()
{
    string line;

    ifstream in("2Dir/2.txt"); // окрываем файл для чтения
         ofstream fout("first.txt"); // открываем файл для записи
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
            cout << reverse(line) << endl;
         fout << reverse(line) << endl;

        }
    }
    in.close();     // закрываем файл
fout.close();       // закрываем файл для записи

///////////////

fstream clear_file2("2Dir/2.txt", ios::out); // открываем файл очещая его
    clear_file2.close(); //закрываем его

ifstream in2("first.txt"); // окрываем файл для чтения
    ofstream fout2("2Dir/2.txt"); // открываем файл для записи

if (in2.is_open())
    {

      while (getline(in2, line))
        {
                    fout2 << line << endl;
        }
    }
    in2.close();     // закрываем файл для считывания
    fout2.close();       // закрываем файл для записи


    cout << "End of theard" << endl;
}

void thirdThread()
{
string line;

    ifstream in("3Dir/3.txt"); // окрываем файл для чтения
ofstream fout("first.txt"); // открываем файл для записи
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
            cout << reverse(line) << endl;
                 fout << reverse(line) << endl;
        }
    }
    in.close();     // закрываем файл
fout.close();       // закрываем файл для записи

//////////////////

fstream clear_file2("3Dir/3.txt", ios::out); // открываем файл очещая его
    clear_file2.close(); //закрываем его

ifstream in2("first.txt"); // окрываем файл для чтения
    ofstream fout2("3Dir/3.txt"); // открываем файл для записи

if (in2.is_open())
    {

      while (getline(in2, line))
        {
                    fout2 << line << endl;
        }
    }
    in2.close();     // закрываем файл для считывания
    fout2.close();       // закрываем файл для записи

    cout << "End of theard" << endl;
}

void fourthThread()
{
string line;

    ifstream in("4Dir/4.txt"); // окрываем файл для чтения
ofstream fout("first.txt"); // открываем файл для записи
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
            cout << reverse(line) << endl;
         fout << reverse(line) << endl;
        }
    }
    in.close();     // закрываем файл
fout.close();       // закрываем файл для записи

////////////////////
fstream clear_file2("4Dir/4.txt", ios::out); // открываем файл очещая его
    clear_file2.close(); //закрываем его

ifstream in2("first.txt"); // окрываем файл для чтения
    ofstream fout2("4Dir/4.txt"); // открываем файл для записи

if (in2.is_open())
    {

      while (getline(in2, line))
        {
                    fout2 << line << endl;
        }
    }
    in2.close();     // закрываем файл для считывания
    fout2.close();       // закрываем файл для записи


cout << "End of theard" << endl;
}

int main()
{
        cout << "HELLO" << endl;

        thread first (firstTheard); // создаем поток параметром которого является функция firstThread
        first.join();

        thread second (secondThread);
        second.join();

        thread third (thirdThread);
        third.join();

        thread fourth (fourthThread);
        fourth.join();
        return 0;
}
