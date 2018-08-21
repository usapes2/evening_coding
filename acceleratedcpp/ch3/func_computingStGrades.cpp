
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::vector;
using std::sort;
using std::domain_error;
using std::istream;
//using namespace std;

// Calculating the grade
double grade ( double midterm, double final, double homework) {
	return 0.2*midterm + 0.4*final + 0.4 * homework;
} 

// Calculating the median 
double median(vector<double> vec)  {

	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();

	if(size ==0)
		throw domain_error("median of an empty vector");
	sort(vec.begin(),vec.end());

	vec_sz mid = size/2;

	return size % 2 == 0 ? ( vec[mid] + vec[mid-1] ) / 2 : vec[mid];
}

// Calculating the grade with median 
double grade ( double midterm, double final, const vector<double>& hw) {
	if(hw.size() == 0)
		throw domain_error("student has done no hw");
	return grade(midterm,final,median(hw));
}

istream & read_hw(istream& in, vector <double>& hw) {
	if(in) {
		//get rid of previous contents
		hw.clear();
		// read hw grades
		double x;
		while ( in>>x )
			hw.push_back(x);
		//clear the stream so that input will work for the next student
		in.clear();
	}

	return in;
}

int main () {

	// ask for and read hte student's name
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << " Hello, " << name << "!" << endl;

	// ask fo and read the midterm and final grades 
	cout << "Please enter your mid and final exam grades : ";
	double midterm,final;
	cin>>midterm>>final;
	// ask for the hw grades
	cout << " Enter al your hw grades,"
		"followed by end of file ";
	vector<double> homework;
	// read the hw grades
	read_hw(cin,homework);
	// compute and generate the final grade, if possible
	try {
		double final_grade = grade(midterm,final,homework);
		streamsize prec = cout.precision();
		cout << endl;
		cout << " Your final grade is" << setprecision(3) <<final_grade<<setprecision(prec)<<endl;
	}catch (domain_error) {
		cout << endl<<"You must enter your grades. "
			"Please try agian."<<endl;
		return 1;
	}

	return 0;
}
