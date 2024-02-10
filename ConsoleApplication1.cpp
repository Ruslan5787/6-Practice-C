#include <iostream>;
#include <string.h>
using namespace std;

bool glasnaya(char a) {
	char glasnie[] = { 'a', 'i', 'o','y','e', 'u', 'A', 'I', 'O', 'Y', 'E', 'U'};
	bool isGlasnie = false;

	for (int i = 0; i < sizeof(glasnie); i++)
	{
		if (a == glasnie[i]) {
			isGlasnie = true;
		}
	}

	return isGlasnie;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	char string[255];
	cout << "Введите слово - ";
	gets_s(string);

	for (int i = 0; i <= strlen(string); i++)
	{
		if (!glasnaya(string[i])) {
			cout << string[i];
		}
	}
}
