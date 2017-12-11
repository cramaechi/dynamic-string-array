/*---------------------------------------------------------------------
This is the header file dynamicstringarray.h. This is the interface for
the class DynamicStringArray. Values of this type represent a
two-dimensional dynamic string array that can grow and shrink while the
program is running.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
---------------------------------------------------------------------*/
#include <string>
using namespace std;

class DynamicStringArray
{
public:
    DynamicStringArray();

    DynamicStringArray(const DynamicStringArray& otherDSArray); //Copy constructor  
    
    int getSize() const {return size;}
    //Returns the size of the dynamic array. 

    void addEntry(const string& element);
    //Adds element at the end of the dynamic array.

    bool deleteEntry(const string& targetElement);
    //Removes the first occurence of an element matching targetElement.

    const string getEntry(int index) const;  
    //Returns an element at position index.

    DynamicStringArray& operator =(const DynamicStringArray& rightSide);

    ~DynamicStringArray(); //Destructor
private:
    int size;
    string *dynamicArray;
};
