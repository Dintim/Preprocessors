#include "country.h"
#define Kaz 1
#define Rus 2
#define Usa 3
#define capital


int main() 
{
	country KZ, RU, USA;
	KZ.c_enter();	
	RU.c_enter();
	USA.c_enter();

#ifdef Kaz
	KZ.c_print();
#endif

#ifdef Rus
	RU.c_print();
#endif

#ifdef Usa
	USA.c_print();
#endif



	
	/*country cc[3];
	for (int i = 0; i < 3; i++) {
		cc[i].c_enter;
	}

	for (int i = 0; i < 3; i++)
		cc[i].c_print;*/

	system("pause");
	return 0;
}