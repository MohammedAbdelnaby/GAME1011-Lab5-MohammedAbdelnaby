#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person
{
public:
	Person(){}
	Person(string pName, int pAge) : name(pName), age(pAge)
	{}
	string getName() { return name; }
	int getAge() { return age; }
private:
	string name;
	int age;
};