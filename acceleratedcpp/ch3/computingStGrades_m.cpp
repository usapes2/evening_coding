#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::vector;

//using namespace std;
int main () {
	// ask for and read the student's name
	cout <<"Please enter your first name:";
	string name;
	cin >> name;
	cout << "Hello, "<<name<<"!"<<endl;

	// ask for and read the midterm and final grades
	cout << "Please enter your midterm and final exam grades:";
	double midterm ,  final;
	cin >> midterm >> final;

	// ask for the homework grades 
	cout << "Enter all your homework grades,"
	       "	followed by end-off-file: ";

	// the number and sum of grades read so far
	int count = 0;
	double sum =0;
	
	// a variable into which to read
	double x;
	vector<double> hw;


	// invariant:
	// we have read count grades so far, and
	// sum is the sum of the first count grades
	/* Next condition implicitly uses an istream as the subject of the while condition: 
	 if ( cin >> x) { * .... }  is the same statement as cin >>x ; if ( cin ) { ... }
	 cin has a type of istream. */
	
	while(cin>>x) 
		hw.push_back(x);

	// write the result 
	streamsize prec = cout.precision(); // presision is a member function of cout is used to reset the precision.
	cout << "Your final grade is "<< setprecision(3)<<0.2*midterm+0.4*final+0.4*sum/count<<setprecision(prec)<<endl;
	// setprecision is a manipulator.It manipulates the stream by causing subsequent output on that stream to appear with the given 
	// numver of sig digits.



	return 0;
}
