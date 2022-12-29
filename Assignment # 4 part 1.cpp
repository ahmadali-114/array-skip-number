#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (i != 3 && i != 5) {
            sum += arr[i];
        }
    }
    cout << "Sum of Number : " << sum << endl;
	return 0;
}
