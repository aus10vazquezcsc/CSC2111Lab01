#if !defined WRITE_FILE
#define WRITE_FILE

#include "String.h"

#include <fstream>
using namespace std;

class WriteFile
{
<<<<<<< HEAD
    private:
        ofstream output_file;
        bool closed;
	public:
    	WriteFile(const char* file_name);
        ~WriteFile();
        void writeLine(String* line);
        void close();
};

=======
   private:
    ofstream output_file;
    bool closed;
   
   public:
    WriteFile(const char* file_name);
	virtual ~WriteFile();
	void writeLine(string* line);
	void close();

};



>>>>>>> 1280d1f6b2f7ee0857c95d2e221ff41cdf16108b
#endif
