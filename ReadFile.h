#if !defined READ_FILE
#define READ_FILE

#include "String.h"

#include <fstream>
using namespace std;

//! Class to read in from a file and close the file when finished.
class ReadFile
{
    private:
        ifstream input_file;
        bool _eof;
        bool closed;
	public:
	    //! The constructor that accepts the file name to be read from.
        ReadFile(const char* file_name);
		//! The destructor.
        ~ReadFile();
		
		//! Returns a string that holds the contents of the file.
        String* readLine();
		//! Returns a boolean of end of file.
        bool eof();
		//! Closes the file if not already closed.
        void close();	
}

#endif
