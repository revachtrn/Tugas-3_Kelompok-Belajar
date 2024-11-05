#include <iostream>
using namespace std;

int main () {

	int nilai;
	string grade;
	
	cout << " ------------ Program Grade Nilai-----------"	 << endl;
	cout << "Inputkan Nilai Anda: ";
	cin >> nilai;
	
	if (nilai >= 90) {
		grade = "A";
	}
	else if (nilai >= 80) {
		grade = "B+";
	}
	else if (nilai >= 70) {
		grade = "B";
	}
	else if (nilai >= 60) {
		grade = "C+";
	}
	else if (nilai >= 50) {
		grade = "C";
	}
	else if (nilai >= 40) {
		grade = "D";
	}
	else if (nilai >= 30) {
		grade = "E";
	}
	else {
		grade = "F";
	}
	
	cout << "grade anda: " << grade << endl;
	
	return 0;
	
}

