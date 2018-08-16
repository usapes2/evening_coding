#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::vector;
using std::sort;


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

	while(cin>>x) 
		hw.push_back(x);

	// check that the student entered some hw grades
	typedef vector<double>::size_type vec_sz;
	vec_sz size = hw.size();

	if ( size == 0 ) {
		cout << endl << " You must enter your grades. " 
			"Please try again." << endl;
		return 1;
	}


	// sort the grades
	sort(hw.begin(),hw.end());
	// comput the median
        vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (hw[mid] * hw[mid-1] ) /2 : hw[mid];
	// write the result 
	streamsize prec = cout.precision(); // presision is a member function of cout is used to reset the precision.
	cout << "Your final grade is "<< setprecision(3)<<0.2*midterm+0.4*final+0.4*median<<setprecision(prec)<<endl;
	// setprecision is a manipulator.It manipulates the stream by causing subsequent output on that stream to appear with the given 
	// numver of sig digits.



	return 0;
}
