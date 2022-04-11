# include <iostream>
# include <cmath> 

using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age; 

    cout  << "You are " << age << " years old";

    string name;
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Your name is " << name;



    return 0;
}

