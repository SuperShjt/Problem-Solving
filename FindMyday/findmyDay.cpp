#include <iostream>
using namespace std;
int main()
{
	int startA, startB,A,B,total,daily, time;
	bool flag = false;
	//total = 23 start A = 5 StartB = 3  A=18 B=20
	cout << "Enter how many exams user can solve per day: " << endl;
	cin >> daily;
	cout << "Enter time interval: " << endl;
	cin >> time;
	cout << "Enter how many exams user A solved in day 1: " << endl;
	cin >> startA;
	cout << "Enter how many exams user B solved in day 1: " << endl;
	cin >> startB;
	if (startA >= startB) {
		total = (time * daily) + startA;
	}
	else {
		total = (time * daily) + startB;
	}
	cout << "Total: " << total << endl;
	A = total - startA;
	B = total - startB;
	cout << "User A: " << A << endl;
	cout << "User B: " << B << endl;
	for (int i = 1; i <= time; i++) {
		A -= 3;
		B -= 3;
		cout << "Day " << i << endl;
		cout << "User A: " << A << endl;
		cout << "User B: " << B << endl;
		if (B > A) {
			B--;
			cout << "User B with extra exams done: " << B << endl;
		}
		else if (B = A) {
		
			flag = true;
			cout << "Day that (UserB = UserA): Day  " << i << endl;
		}
	}
}
