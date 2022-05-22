#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    ifstream preview;
    string line, filename;
    int count = 1;

    if (argc == 1)
    {
        cout << "Please pass file name. " << endl;
        cout << "Usage: ./a.out filename" << endl;
        cout << endl;
        exit(0);
    }

    filename = argv[1];
    preview.open(filename, ios::in);

    if (preview.fail())
    {
        cout << "Unable to open file. " << endl;
        cout << endl;
        exit(0);
    }

    while(!preview.eof())
    {
        getline(preview, line);
        cout << line << endl;
        if (count == 10)
        {
            preview.close();
            cout << endl;
            exit(0);
        }
        count++;
    }

    cout << endl;
    cout << "Note: The entire file has been displayed." << endl;
    preview.close();
    cout << endl;
    return 0;
}