#include <iostream>
using namespace std;

void print_stars(int width, int height)
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
            cout << "*";
        cout << endl;
    }
    return ;
}

int main() {

    print_stars(10, 5);
    return 0;
}