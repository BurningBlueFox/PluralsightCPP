#pragma once
#include <string>
#include "IPrintable.h"

namespace Human::Monkey
{
	class Person : public IPrintable
	{
	public:

		std::string GetName() const;
		int GetHeight() const;
		void SetHeight(int newHeight);

		Person(std::string name, std::string lName) : firstName(name), lastName(lName), height(0)
		{
		}
		Person(std::string name, std::string lName, int heightCent) : firstName(name), lastName(lName), height(heightCent)
		{
		}
		~Person() = default;

		bool operator<(Person const& p) const;
		bool operator>(Person const& p) const;
		bool operator==(Person const& p) const;
		bool operator<(int const i) const;
		bool operator>(int const i) const;
		bool operator==(int const i) const;
		virtual void const Print() override;
	private:
		std::string firstName;
		std::string lastName;
		int height;

		// Inherited via IPrintable
	};
	bool operator<(int const i, Person const p);
	bool operator>(int const i, Person const p);
	bool operator==(int const i, Person const p);



}