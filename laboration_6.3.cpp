#include <iostream>

using namespace std;

bool Is_Elem_Vpor_Za_Nezrost(int array[], int n)
{
	for (int i = 0; i < n - 1; i++)
		if (array[i] < array[i + 1])
			return false;
	return true;
}

int main() {
	int array[] = { 5, 5, 4, 4, 3, 1 };
	int n = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	if (Is_Elem_Vpor_Za_Nezrost(array, n)) {
		cout << "Vporyadkovani za nezrostanyam: " << endl;
	}
	else {
		cout << "Vporyadkovani ne za nezrostanyam: " << endl;
	}
	return 0;
}