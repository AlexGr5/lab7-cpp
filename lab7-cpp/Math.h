#pragma once
// ����� ����������
class Math
{
private:
    int value;       // ��������

public:
    // �����������
    Math(int value);

    // ��������
    Math& Add(int value);

    // ���������
    Math& Sub(int value);

    // ���������
    Math* Mult(int value);

    // �������
    Math* Div(int value);

    // ����������� ��������� "+"
    friend Math operator +(const Math& math1, const Math& math2);

    // ����������� ��������� "-"
    friend Math operator -(const Math& math1, const Math& math2);

    // ����������� ��������� "*"
    friend Math operator *(const Math& math1, const Math& math2);

    // ����������� ��������� "/"
    friend Math operator /(const Math& math1, const Math& math2);

    // ��������� ����������� ��������� "++"
    Math& operator ++();

    // ��������� ������������ ��������� "++"
    Math operator ++(int);

    // ��������� ��������
    int getValue();
};

