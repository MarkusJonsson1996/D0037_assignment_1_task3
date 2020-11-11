#include <iostream>

using namespace std;

//#define FOR
//#define WHILE
#define DOWHILE


int main() {
	
	int uin;

	cin >> uin;

#ifdef FOR
	
	for (int i = 0; i < uin; i++)
		cout << "Hello World" << endl;


#endif

#ifdef WHILE

	int i = 0;

	while (i < uin) {
		cout << "Hello World" << endl;
		i++;
	}
#endif

#ifdef DOWHILE

	int i = 0;

	do {
		cout << "Hello World" << endl;
		i++;
	} while (i < uin);
#endif

	return 0;
}