//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT1_TEXT_V2023_1_TEXT_H
#define PROG3_UNIT1_TEXT_V2023_1_TEXT_H
//class atributos privados por defecto
//struct atributos publicos por defecto
#include "iostream"
using namespace std;
class Text{
    char* _text = nullptr; //inicializacion in class
    int _sz = 0;
public:
    Text() = default; //constructor por defecto
    Text(const char* _text); //constructor por parametros
    Text(const Text& other); //constructor copia
    Text(Text&& other); //constructor move

    Text& operator=(const Text& other); //Asignacion copy
    Text& operator=(Text&& other);
    //sobrecarga
    Text operator*(const Text& other);
    Text operator*=(const Text& other);

    friend ostream& operator<<(ostream& out, const Text& text);
    friend istream& operator>>(istream& out, const Text& text);


};

ostream& operator<<(ostream& out, const Text& text);
istream& operator>>(istream& out, const Text& text);

//Text& operator=(Text& text, const string& other);
//string& operator=(const string&, const Text& other);

#endif //PROG3_UNIT1_TEXT_V2023_1_TEXT_H
