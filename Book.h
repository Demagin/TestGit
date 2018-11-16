#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<string>

using namespace std;

class book
{
private:
	string name;
	string author;

public:
	book(string n, string a);
	~book();

	string _name() const;
	string _author() const;
};

book::book(string n, string a) :name(n), author(a) {}//конструууууктор

book::~book()
{
}

inline string book::_name() const
{
	return this->name;
}

inline string book::_author() const
{
	return this->author;
}

#endif // !BOOK_H

