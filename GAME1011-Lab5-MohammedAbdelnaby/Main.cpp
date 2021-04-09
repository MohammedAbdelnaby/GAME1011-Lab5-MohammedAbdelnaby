#include <iostream>
#include <time.h>
#include "DynTempStack.h"
#include "DynTempQueue.h"
#include "Person.h"
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	DynTempStack<int> IntTempStack;
	DynTempStack<double> DoubleTempStack;
	DynTempStack<Person> PersonTempStack;
	Person person1("Alex", 23), person2("Zack", 19), person3("Bob", 30);
	int Inttemp;
	double doubletemp;
	Person Temp;
	cout << "primitive datatype (Int) Push:" << endl;
	for (int i = 1; i < 10; i++)
	{
		Inttemp = i * (1 + rand() % 5);
		IntTempStack.push(Inttemp);
		cout << Inttemp << " ";
	}

	cout << endl;

	cout << "primitive datatype (Int) Pop:" << endl;
	while (!IntTempStack.isEmpty())
	{
		IntTempStack.pop(Inttemp);
		cout << Inttemp << " ";
	}

	cout << endl;
	cout << endl;

	cout << "primitive datatype (Double):" << endl;
	for (int i = 1; i < 10; i++)
	{
		doubletemp = i * 2.3;
		DoubleTempStack.push(doubletemp);
		cout << doubletemp << " ";
	}
	cout << endl;
	cout << "primitive datatype (Double) Pop:" << endl;
	while (!DoubleTempStack.isEmpty())
	{
		DoubleTempStack.pop(doubletemp);
		cout << doubletemp << " ";
	}

	cout << endl;
	cout << endl;


	cout << "Non-primitive datatype (Person) Push:" << endl;

	cout << endl;

	cout << "Person 1:" << endl;
	cout << person1.getName() << endl;
	cout << person1.getAge() << endl;
	PersonTempStack.push(person1);

	cout << endl;

	cout << "Person 2:" << endl;
	cout << person2.getName() << endl;
	cout << person2.getAge() << endl;
	PersonTempStack.push(person2);

	cout << endl;

	cout << "Person 3:" << endl;
	cout << person3.getName() << endl;
	cout << person3.getAge() << endl;
	PersonTempStack.push(person3);

	cout << endl;

	cout << "Non-primitive datatype (Person) Pop:" << endl;

	cout << endl;

	cout << "Person 3:" << endl;
	PersonTempStack.pop(Temp);
	cout << Temp.getName() << endl;
	cout << Temp.getAge() << endl;

	cout << endl;

	cout << "Person 2:" << endl;
	PersonTempStack.pop(Temp);
	cout << Temp.getName() << endl;
	cout << Temp.getAge() << endl;

	cout << endl;

	cout << "Person 1:" << endl;
	PersonTempStack.pop(Temp);
	cout << Temp.getName() << endl;
	cout << Temp.getAge() << endl;
	
	// transtion to queue
	cout << "Press any key to continue to Queues" << endl;
	system("PAUSE");
	system("CLS");
	doubletemp = NULL;
	Inttemp = NULL;
	DynTempQueue<int> IntTempQueue;
	DynTempQueue<double> DoubleTempQueue;
	DynTempQueue<Person> PersonTempQueue;

	cout << "primitive datatype (Int) Enqueue:" << endl;
	for (int i = 1; i < 10; i++)
	{
		Inttemp = i * (1 + rand() % 5);
		IntTempQueue.enqueue(Inttemp);
		cout << Inttemp << " ";
	}
	cout << endl;
	cout << "primitive datatype (Int) Dequeue:" << endl;
	while (!IntTempQueue.isEmpty())
	{
		IntTempQueue.dequeue(Inttemp);
		cout << Inttemp << " ";
	}

	cout << endl;
	cout << endl;

	cout << "primitive datatype (Double) Enqueue:" << endl;
	for (int i = 1; i < 10; i++)
	{
		doubletemp = i * 2.3;
		DoubleTempQueue.enqueue(doubletemp);
		cout << doubletemp << " ";
	}
	cout << endl;
	cout << "primitive datatype (Double) Dequeue:" << endl;
	while (!DoubleTempQueue.isEmpty())
	{
		DoubleTempQueue.dequeue(doubletemp);
		cout << doubletemp << " ";
	}

	cout << endl; 
	cout << endl;

	cout << "Non-primitive datatype (Person) Enqueue:" << endl;

	cout << endl;

	cout << "Person 1:" << endl;
	cout << person1.getName() << endl;
	cout << person1.getAge() << endl;
	PersonTempQueue.enqueue(person1);

	cout << endl;

	cout << "Person 2:" << endl;
	cout << person2.getName() << endl;
	cout << person2.getAge() << endl;
	PersonTempQueue.enqueue(person2);

	cout << endl;

	cout << "Person 3:" << endl;
	cout << person3.getName() << endl;
	cout << person3.getAge() << endl;
	PersonTempQueue.enqueue(person3);

	cout << "Non-primitive datatype (Person) Dequeue:" << endl;

	cout << endl;

	cout << "Person 1:" << endl;
	PersonTempQueue.dequeue(Temp);
	cout << Temp.getName() << endl;
	cout << Temp.getAge() << endl;

	cout << endl;

	cout << "Person 2:" << endl;
	PersonTempQueue.dequeue(Temp);
	cout << Temp.getName() << endl;
	cout << Temp.getAge() << endl;

	cout << endl;

	cout << "Person 3:" << endl;
	PersonTempQueue.dequeue(Temp);
	cout << Temp.getName() << endl;
	cout << Temp.getAge() << endl;
}