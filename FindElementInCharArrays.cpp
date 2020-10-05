#include<iostream>
#include<time.h>
#include<iomanip>
#include<string>

using namespace std;

int main() {

	char arr[255];
	char arr2[255];
	char arr3[255];
	
	cin.getline(arr, 255);

	int index = 0;
	int stop = 0;
	for (int i = 0; i < 255; i++) {
		if (int(arr[i]) == 43) {
			index = i;
		}
		if (int(arr[i]) == ' ') {
			stop = i;
		}
		
	}
	for (int i = index+1,j=0; i < 255;i++,j++) {
		arr3[j] = arr[i] ;
	}
	
	 strncpy_s(arr2,arr,index);
	 cout << arr2 << endl;
	 cout << arr3 << endl;
	 int number3 = atoi(arr3);
	 int number2 = atoi(arr2);
	 cout<<number3<<" + "<<number2<<" = " << number2 + number3 << endl;

	return 0;
}
