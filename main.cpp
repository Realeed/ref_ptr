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

//int* err = 3;		will throw an error