/* Grading scale from the course description 
 * 90-100% = A , 80-89 % = B, 70 - 79% = C, 60-69% = D, 0 - 59% = F.
 * Input from user: score(a percentage).
 * Output to screen: Letter grade with as justification a reference to the corresponing perentage.*/

#include<iostream>
#include<math.h>



using namespace std;

int main() {

	double input;
	cout << " Enter your score %:  " << endl;
	cin >> input;

	int score = ceil(input); // ceil return the smallest integer not less than x

	char grade;

	if (score>=90)
		grade = 'A';
	else if (score>=80)
		grade = 'B';
	else if (score>=70)
		grade = 'C';
	else if (score>=60)
		grade = 'D';
	else 
		grade = 'F';
	cout << " Score " << score<<" equals the grade "<< grade << ", as ";

	switch(grade)
	{
		case 'A': cout << score << " >=90%";break;
		case 'B': cout << " 80% <= " << score << " <=89%" ;break;
		case 'C': cout << " 70% <=" << score << " <=79%" ;break;
		case 'D': cout <<" 60% <= " << score << " <= 69%" ;break;
		default : cout << score << " <= 59% "; break;
	}

		

	return 0;
}
