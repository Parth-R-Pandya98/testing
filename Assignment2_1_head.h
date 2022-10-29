using namespace std;


// Function     :   print_array
// Author       :   Parth Pandya (Student Id : 200468783)
// FOR COURSE   :   CS 700
// DATE         :   12th October 2021

/**
print_array
Purpose: Displaying array content
Parameter(s): 
   <1> int size: Getting array size
   <2> double s1_result: Real array values to display
Precondition(s): N/A
Returns: N/A 
         
Side effect: N/A
*/
void display(int size, double s1_result[][10])
{
	cout<< "Size :"<< size<<"\t\t\t Time in second(s)"<< endl;
	cout<< "\n";

	// Execution time for 10 array's random time, sorted time, inverse time
	// Heading of table
	cout<<left<< setw(20)<< "Arr/Exe. time"<< left<< setw(5)<< "|";
	for(unsigned int column=0; column<10; column++)
		cout<<"Arr "<<left<< setw(5)<< column+1<<  " ";
	cout<< "\n\n";

	// Display data for all arrays
	for(unsigned int tuple=0; tuple<3; tuple++)
	{
		if(tuple == 0)
			cout<<left<< setw(20)<< "Random exe. time"<< left<< setw(5)<< "|";
		if(tuple == 1)
			cout<<left<< setw(20)<< "Sorted exe. time"<< left<< setw(5)<< "|";
		if(tuple == 2)
			cout<<left<< setw(20)<< "Inverse exe. time"<< left<< setw(5)<< "|";
		for(unsigned int column=0; column<10; column++)
		{
			cout<< left<< setw(9)<< s1_result[tuple][column]<< " ";
		}
		cout<< "\n";
	}
	cout<< "\n\n";
	cout<< "*****************************************************************************************************************"<< endl;

}