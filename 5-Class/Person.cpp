#pragma once
#include "Person.h"
#include <string>
#include <iostream>

namespace Human::Monkey
{
	std::string Person::GetName() const
	{
		return firstName + " " + lastName;
	}
	int Person::GetHeight() const
	{
		return height;
	}
	void Person::SetHeight(int newHeight)
	{
		height = newHeight;
	}
	bool Person::operator<(Person const& p) const
	{
		return height < p.height;
	}
	bool Person::operator>(Person const& p) const
	{
		return height > p.height;
	}
	bool Person::operator==(Person const& p) const
	{
		return height == p.height;
	}
	bool Person::operator<(int const i) const
	{
		return height < i;
	}
	bool Person::operator>(int const i) const
	{
		return height > i;
	}
	bool Person::operator==(int const i) const
	{
		return height == i;
	}
	void const Person::Print()
	{
		std::cout << "I'm printing to the console" << std::endl;
	}
	bool operator<(int const i, Person const p)
	{
		return i < p.GetHeight();
	}
	bool operator>(int const i, Person const p)
	{
		return i > p.GetHeight();
	}
	bool operator==(int const i, Person const p)
	{
		return i == p.GetHeight();
	}

}