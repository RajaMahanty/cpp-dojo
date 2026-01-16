#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // std::cout << char(65);
    char c1, c2, c3, c4, c5;
    cout << "ENter 5 characters:";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII messages: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);
    return 0;
}
