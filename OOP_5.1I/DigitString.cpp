//////////////////////////////////////////////////////////////////////////////
// DigitString.cpp
#include "DigitString.h"
#include <sstream>
#include <iostream>

string DigitString::toString() const {
	stringstream sout;
	sout << GetNum();
	return sout.str();
};

void DigitString::Init(string num)
{
	SetNum(num);
}

void DigitString::Read()
{
	string num;
	cout << "	Number.exp = ? "; cin >> num;
	Init(num);
}

void DigitString::Display()
{
	cout << toString();
}

DigitString Add(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << (a.toInt() + b.toInt());
	r.SetNum(sout.str());
	return r;
}

DigitString Sub(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << a.toInt() - b.toInt();
	r.SetNum(sout.str());
	return r;
}

DigitString Mul(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << a.toInt() * b.toInt();
	r.SetNum(sout.str());
	return r;
}

DigitString Div(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << a.toInt() / b.toInt();
	r.SetNum(sout.str());
	return r;
}

int Compare(const DigitString& a, const DigitString& b)
{
	if (a.toInt() < b.toInt())
		return 0;
	else if (a.toInt() > b.toInt())
		return 1;
	else
		return -1;
}

DigitString& DigitString::operator --() // ���������� ���������
{
	int v = toInt();
	--v;
	stringstream sout;
	sout << v;
	SetNum(sout.str());
	return *this; // ��������� ������������� ��'���
}

DigitString& DigitString::operator ++() // ���������� ���������
{
	int v = toInt();
	++v;
	stringstream sout;
	sout << v;
	SetNum(sout.str());
	return *this; // ��������� ������������� ��'���
}

DigitString DigitString::operator --(int) // ����������� ���������
{
	DigitString a(*this); // �������� ����
	int v = toInt();
	v--;
	stringstream sout;
	sout << v;
	SetNum(sout.str());
	return a; // ��������� ����
}

DigitString DigitString::operator ++(int) // ����������� ���������
{
	DigitString a(*this); // �������� ����
	int v = toInt();
	v++;
	stringstream sout;
	sout << v;
	SetNum(sout.str());
	return a; // ��������� ����
}

ostream& operator <<(ostream& out, const DigitString& ds)
{
	return out << ds.toString();
}

istream& operator >>(istream& in, DigitString& ds)
{
	string n;
	cout << ".exp ? = "; in >> n;
	ds.SetNum(n);
	//cout << endl;
	return in;
}

DigitString& DigitString::operator =(const DigitString& ds)
{
	SetNum(ds.GetNum());
	return *this; // ��������� ��������� �� �������� �ᒺ��
}

DigitString::operator string() const
{
	return toString();
}

DigitString operator +(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << (a.toInt() + b.toInt());
	r.SetNum(sout.str());
	return r;
}

DigitString operator -(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << a.toInt() - b.toInt();
	r.SetNum(sout.str());
	return r;
}

DigitString operator *(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << a.toInt() * b.toInt();
	r.SetNum(sout.str());
	return r;
}

DigitString operator /(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << a.toInt() / b.toInt();
	r.SetNum(sout.str());
	return r;
}

bool operator ==(const DigitString& a, const DigitString& b)
{
	return a.toInt() == b.toInt();
	//return true;
	//return strcmp(a.toString().c_str(), b.toString().c_str()) > 0;
}

bool operator !=(const DigitString& a, const DigitString& b)
{
	return a.toInt() != b.toInt();
}

bool operator >=(const DigitString& a, const DigitString& b)
{
	return a.toInt() >= b.toInt();
}

bool operator >(const DigitString& a, const DigitString& b)
{
	return a.toInt() > b.toInt();
}

bool operator <=(const DigitString& a, const DigitString& b)
{
	return a.toInt() <= b.toInt();
}

bool operator <(const DigitString& a, const DigitString& b)
{
	return a.toInt() < b.toInt();
}
