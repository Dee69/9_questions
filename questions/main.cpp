#include <iostream>

using namespace std;

int main()
{

//what is the players name?

    string fullname, fname, mname, lname;

    cout<<"please enter full name\n\n";
    cin>>fname>>mname>>lname;

    fullname= fname+" "+mname+" "+lname;
    cout<<fullname<<"\n\n";


//greeting player

    cout<<"Hello "<<fname<<"\n";

//define answers
    string answer1,answer2,answer3,answer4,answer5;
//define multiple choice
    cout<<"Please enter a,b,c,d,e\n a)Excellent\n b)Good\n c)Ok\n d)Fair\n e)Shit\n\n";

//question 1
    cout<<"How are you?\n";
    cin>>answer1;


//question 2

    cout<<"how is the weather?\n";
    cin>>answer2;

//question 3

    cout<<"How would you rate Liyha??\n";
    cin>>answer3;

//question 4

    cout<<"Do you like Tim?\n";
    cin>>answer4;


//question 5

    cout<<"What is your age?\n";
    cin>>answer5;















        cout<<answer1;
        cout<<answer2;
        cout<<answer3;
        cout<<answer4;
        cout<<answer5;







    return 0;
}
