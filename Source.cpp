// Апарович Матвей 
#include <iostream>
using namespace std;
int main() {
/*Boolean1◦Дано целое число A. Проверить истинность высказывания: «Число A является положительным»*/
/* int a; 
	bool b; 
	cin >> a;
	b = a > 0;
	cout << boolalpha <<b << endl;*/
	/*Boolean2◦
. Дано целое число A. Проверить истинность высказывания: «Число A является нечетным».
*/
	int a;
	bool b; 
	cin >> a;
	b = a % 2 == 0; 
	cout << boolalpha << b << endl; 
	return 0;
}