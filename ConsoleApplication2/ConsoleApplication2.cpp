#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string path = "D:\\git\\LecturesCpp\\ConsoleApplication2\\text.txt";

    fstream file;
    file.open(path);

    string lines[] = { "hello", "world", "whatsup", "cpp" };

    for (size_t i = 0; i < 4; i++)
    {
        file << lines[i] << endl;
    }

    return 0;
}

