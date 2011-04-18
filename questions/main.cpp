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

    string greeting;
    greeting="Hello "+fname+"\n";
    cout<< greeting;

//define answers
    string answer1,answer2,answer3,answer4,answer5;
//define multiple choice
    string multiple_choice_answers;
    cout<< "Please enter a,b,c,d,e\n";
    multiple_choice_answers= "a)Excellent\n b)Good\n c)Ok\n d)Fair\n e)Shit\n\n";


//define the questions


    string question1,question2,question3,question4,question5;
    question1="How are you?\n";
    question2="how is the weather?\n";
    question3="How would you rate Liyha??\n";
    question4="Do you like Tim?\n";
    question5="What is your age?\n";



//question 1


    cout<<question1;
    cout<<multiple_choice_answers;
    cin>>answer1;


//question 2

    cout<<question2;
    cout<<multiple_choice_answers;
    cin>>answer2;

//question 3


    cout<<question3;
    cin>>answer3;

//question 4

    cout<<question4;
    cin>>answer4;


//question 5

    cout<<question5;
    cin>>answer5;















        cout<<answer1;
        cout<<answer2;
        cout<<answer3;
        cout<<answer4;
        cout<<answer5;







    return 0;
}
