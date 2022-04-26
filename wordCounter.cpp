// C++ program to count words in 
// a string using stringstream.
#include <iostream>
#include <sstream>


using namespace std;

int wrdCount(string wrd) {

	// used for breaking words
	stringstream s(wrd);

	// We will use this to store our word data
	string word;

	// We made a integrer variable and set its value to zero(0)
	int counter = 0;

	/* we use while loop to loop trough content stored in[word] string.
    * While it's looping trough string, counter will add 1 number.
	* When loop is over, and there is no more data to loop trough,
	* counter will then have value equal to words in string [word]
	* we return counter value
	*/
	while (s >> word)
		counter++;
		return counter;
	

}

int main() {

	string s = "Iam the best programmer at my school "
		"This is not true";


	cout << "Number of the words are: " << wrdCount(s);

}
