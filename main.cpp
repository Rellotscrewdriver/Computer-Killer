#include <iostream>
#include <fstream>

int main()
{
    using namespace std; //do I need to explain this?

    //it simply asks the user to enter the filename
    string text;
    cout << "Enter Your Filename: ";
    //I used getline because cin usually terminates with whitespace.
    getline(cin, text);
    text += ".txt";

    ofstream virus(text);
    while(true){
        virus << "You've been hacked, go cry in corner " << text << endl;
    }

    //I should closing the file but for this program, nope.
    //virus.close();
}