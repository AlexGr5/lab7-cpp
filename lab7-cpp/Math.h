#pragma once
// Класс Математика
class Math
{
private:
    int value;       // Значение

public:
    // Конструктор
    Math(int value);

    // Сложение
    Math& Add(int value);

    // Вычитание
    Math& Sub(int value);

    // Умножение
    Math* Mult(int value);

    // Деление
    Math* Div(int value);

    // Пререгрузка оператора "+"
    friend Math operator +(const Math& math1, const Math& math2);

    // Пререгрузка оператора "-"
    friend Math operator -(const Math& math1, const Math& math2);

    // Пререгрузка оператора "*"
    friend Math operator *(const Math& math1, const Math& math2);

    // Пререгрузка оператора "/"
    friend Math operator /(const Math& math1, const Math& math2);

    // Прегрузка префиксного оператора "++"
    Math& operator ++();

    // Прегрузка постфиксного оператора "++"
    Math operator ++(int);

    // Получение значения
    int getValue();
};

