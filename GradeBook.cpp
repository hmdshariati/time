// the first class that I create
// writed by Hamid Shariati
// version 0.1
// date: 10 nov 2017
// edite by vim
#include <iostream>
using namespace std;
class GradeBook
{
	public:
		//display welcome messege
		void displayMessege()
		{
			cout << "Welcome to the Grade book!" << endl;
		}
};

//the start point of the program
int main()
{
	GradeBook newGradeBook; //new object of GradeBook class
	newGradeBook.displayMessege();
}//end of program
