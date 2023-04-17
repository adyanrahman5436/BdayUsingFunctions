/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void happyBirthday(string name, int age)
{
    cout << "\nHappy Birthday to " << name << "!" << endl;
    cout << "Happy Birthday to " << name << "!" << endl;
    cout << "Happy Birthday to " << name << "!" << endl;
    cout << "Happy Birthday Dear, " << name << "!" << endl;
    cout << "Happy Birthday to you!" << endl;
    cout << "You are now " << age << " years old!" << endl;
}


int main()
{
    string name;
    cout << "What is your name. We have a surprise! ";
    cin >> name;
    
   
    
    
    char birthday;
    cout << "Is it your birthday? (Enter Y for Yes or N for No): ";
    cin >> birthday;
    if (birthday == 'Y' || birthday == 'y')
    {
        int age;
        cout << "How old did you turn? ";
        cin >> age;
        happyBirthday(name, age);
        happyBirthday(name, age);
        happyBirthday(name, age);
        if (age > 20)
        {
            cout << "\nDAMN YOU OLD DUDE!!!!" << endl;
        }
    }
    else
    {
        cout << "Come back during your birthday :))))";
    }
    

    return 0;
}

