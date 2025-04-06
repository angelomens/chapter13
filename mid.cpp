#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    string filename;
    cout << "Enter the file name: ";
    getline(cin, filename);

    ifstream file(filename);
    
    if (file.fail())
    {
        cout << "Error: Could not open file '" << filename << "'." << endl;
        return 1;
    }

    int count = 0;
    char ch;
    
    while (file.get(ch))  
    {
        if(ch >= 'A' && ch <='Z' || ch >= 'a' && ch <= 'z')
        {
            ++ count;
        }    
    }

    file.close();

   cout << "Number of characters in the file: " << count << endl;

    return 0;
}
