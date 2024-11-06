// Phanseys friend tingy 

// Origionally made this in python but recently started learning cpp so i tried to re-make it dosnt work very well but hay ho its a lot faster than python

#include <iostream> // input/output stuff
#include <fstream>  // File stuff

#define FILELOG(x) myFile << x                 // creates a macro for writing in a file
#define LOG(x) std::cout << x << std::endl     // creates a macro for outputting to the console 

void main() // Main loop
{
	int y = 0; // This variable likes going here 
	for (int x = 0; y < 1; x++) // Infinite for loop. X Variable incremented by one very loop (not that it makes mutch of a difference) 
	{
		std::ofstream myFile(x + ".txt"); // Opens a file (should be named the value of x but it normally isnt) .txt bit dosnt make a text file but gets rid of errors 

		FILELOG("N.W.A");  // Write data to files 

		myFile.close();  // closes data to file

		LOG("File created!");  // prints file created to the console 

	}

}