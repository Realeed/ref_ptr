#include "main.h"

int a = 3;			//the variable we will play with
int b = a;			//creates another variable with the same value but a different address


												/*    References   */

		/* References get created as values but become addresses after initialization (may sound stupid but that's the way I get it) */
		/* References act like a placeholder for a varibale */
		/* References do not need to be diclined to be accessed */
		/* References cannot be recreated */

int& c = a;			//creates reference of the variable which holds the same value and has the same address as the variable

//int& err = 3;     will throw an error as a value cannot be assigned to a reference
//int& b = a;		will throw an error as references cannot be created for existing variables
//int& c = b;		will throw an error as references cannot be created for existing references
//int err = &a;     will throw an error as an address cannot be assigned to a variable ("&a" returns an address)
//int& err = &a;    will throw an error as an address cannot be assigned to a reference (it requires a variable, so no addresses no values for references)


												 /*    Pointers   */

		/* Pointers get created as addresses but become values after initialization (again may sound stupid) */
		/* Pointers act like a placeholder for an address */
		/* Pointers need to be declined to be accessed */
		/* Pointers cannot be recreated */

int* d = &a;		//creates a pointer (as an address) which holds the same value and has the same address as the reference
int e = *d;			//creates a variable that has the same value as ptr "d" holds but a different address
int& f = *d;		//creares a reference (as a value) of a pointer which holds the same value and has the same address as the pointer

//int* err = 3;		will throw an error as a value cannot be assigned to a pointer
//int* err = a;		will throw an error as a variable cannot be assigned to a pointer
//int* err = *d;	will throw an error as a value cannot be assigned to a pointer (as mentioned above ("*d" returns a value))


							/* References and pointers are kind of opposite concepts 
							   References act like a value when they are on the left side and addresses when on the right
							   Pointers act like an address when they are on the left side and values when on the right 
							*/

int main() {
												/* cout references */

	cout << "1.   " << a << endl;				
	cout << "2.   " << &a << endl;				//prints the address of the variable (&a is not declared but it can be accessed)
	cout << "3.   " << b << endl;				//prints the value of var "a" but var "b" has a different address
	cout << "4.   " << &b << endl;				//prints the address of var "b" which is different from var "a"'s address
	cout << "5.   " << c << endl;				//prints the value of var "c" which is the same as var "a"'s value and ref "c" has the same address as var "a"
	cout << "6.   " << &c << endl;				//prints the address of ref "c" which is the same as var "a"'s address

												/* cout pointers */

	cout << "7.   " << d << endl;				//prints the address of ptr "d" which is the same as ref "&a"'s address
	cout << "8.   " << *d << endl;				//prints the value of var "a" and ptr "d" has a different address 
	cout << "9.   " << &d << endl;				//prints the address of pointer "d" which is different from var "a"'s address
	cout << "10.  " << e << endl;				//prints the value of var "e" which is the same as ptr "d" holds
  //cout << err << *e << endl;					  will throw an error as ptr "*e" is not declined
	cout << "11.  " << &e << endl;				//prints the address of var "e" which is different from ptr "d"'s address
	cout << "12.  " << f << endl;				//prints the value of ref "&f" which is the same as the ptr "d" holds
  //cout << err << *f << endl;                                    will throw an error as ptr "*f" is not declined
	cout << "13.  " << &f << endl;				//prints the address of ref "&f" which is the same as ptr "d"'s address
	cout << "14.  " << *&d << endl;				//prints the address of ref "&d" which is the same as ptr "d"'s address
	cout << "15.  " << &*d << endl;				//prints the address of ptr "*d" which is the same as ref "d"'s address
}
