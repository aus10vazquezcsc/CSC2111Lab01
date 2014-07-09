#if !defined WRITE_FILE
#define WRITE_FILE

#include "String.h"

#include <fstream>
using namespace std;

//Class to start writing into a text file

/*
* The methods consist in create a text file,
* open, write and close it
*/

class WriteFile
{
   private:
    ofstream output_file;
    bool closed;				//determines if the file can be written or not
   
   public:
   //! The constructor that opens a text file to be written
    WriteFile(const char* file_name);
   //! The destructor deletes all the variables
	virtual ~WriteFile();
	//! This method writes some text from the user into the file
	void writeLine(string* line);
	//! This closes the text and ends the writing
	void close();

};



#endif
