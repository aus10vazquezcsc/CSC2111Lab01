#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
}

WriteFile::~WriteFile()
{
<<<<<<< HEAD

=======
   
>>>>>>> 1280d1f6b2f7ee0857c95d2e221ff41cdf16108b
}

void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

<<<<<<< HEAD
void WriteFile::writeLine(String* line)
=======
void WriteFile::writeLine(string* line)
>>>>>>> 1280d1f6b2f7ee0857c95d2e221ff41cdf16108b
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
}
