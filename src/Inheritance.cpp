//============================================================================
// Name        : Inheritance.cpp
/*
 *
 *	class subClass: public superClass
 *		{
 *		public:
 *			-new subclass functions
 *			-ie void speak()
 *				{
 *				   bla,bla,bla
 *				}
 *		};
 *
 */
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

class Animal	//Super Class
    {
    public:
	void speak()
	    {
	    cout << "Grrrrrrr! -from Animal" << endl;
	    }
    };

class Cat: public Animal	//sub-class, extends/inherits class 'Animal'
    {
    public:
	void jumping()
	    {
	    cout << "I'm jumping! -from Cat" << endl;
	    }
    };

class Tiger: public Cat	//sub-class, extends/inherits class 'Cat'...which inherits 'Animal'
    {
    public:
	void attack()
	    {
	    cout << "TIGER ATTACK! -from Tiger" << endl;
	    }
    };

int main()
    {
    Animal a;
    cout << "Animal...." << endl;
    a.speak();
    cout << endl;

    Cat b;
    cout << "Cat...." << endl;
    b.speak();
    b.jumping();
    cout << endl;

    Tiger c;
    cout << "Tiger...." << endl;
    c.speak();
    c.jumping();
    c.attack();

    return 0;
    }
