#if !defined WRITE_FILE
#define WRITE_FILE

#include "String.h"

#include <fstream>
using namespace std;

class WriteFile
{
   private:
    ofstream output_file;
    bool closed;
   
   public:
    WriteFile(const char* file_name);
	virtual ~WriteFile();
	void writeLine(string* line);
	void close();

};



#endif
