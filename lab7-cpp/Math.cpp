#include "Math.h"

Math::Math(int value)
{
	this->value = value;
}


Math& Math::Add(int value)
{
	this->value += value;
	return *this;
}

Math& Math::Sub(int value)
{
	this->value -= value;
	return *this;
}

Math* Math::Mult(int value)
{
	this->value *= value;
	return this;
}

Math* Math::Div(int value)
{
	if (value != 0)
		this->value /= value;
	else
		this->value = 0;
	return this;
}

int Math::getValue()
{
	return value;
}


Math operator +(const Math& math1, const Math& math2)
{
	return Math(math1.value + math2.value);
}

// Пререгрузка оператора "-"
Math operator -(const Math& math1, const Math& math2)
{
	return Math(math1.value - math2.value);
}

// Пререгрузка оператора "*"
Math operator *(const Math& math1, const Math& math2)
{
	return Math(math1.value * math2.value);
}

// Пререгрузка оператора "/"
Math operator /(const Math& math1, const Math& math2)
{
	if (math2.value != 0)
		return Math(math1.value + math2.value);
	else
		return Math(0);
}

// Прегрузка префиксного оператора "++"
Math& Math::operator ++()
{
	this->value += 1;
	return *this;
}

// Прегрузка постфиксного оператора "++"
Math Math::operator ++(int)
{
	Math m1 = *this;
	++* this;
	return m1;
}