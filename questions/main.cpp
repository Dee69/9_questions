#include <iostream>
#include <fstream>
#include "main.h"
using namespace std;

int main()
{

// define player
    string fullname, fname, mname, lname,enter_full_name_instuc;
    enter_full_name_instuc="please enter full name\n\n";

// define questions
    string Q1,Q2,Q3,Q4,Q5,Q6,Q7,Q8,Q9;
    Q1="How are you?\n\n";
    Q2="How is the weather?\n\n";
    Q3="How would you rate Liyha??\n\n";
    Q4="Do you like Tim?\n\n";
    Q5="What is your age?\n\n";
    Q6="What time is it?\n";
    Q7="Are you working tommorrow?\n\n";
    Q8="How do you feel about working there?\n\n";
    Q9="How long have you worked there?\n\n";

// define answers
    string A1, A2, A3, A4, A5, A6, A7, A8, A9;

// define instructions
    string greeting;
    greeting="Hello ";
    string multiple_choice_answers;
    multiple_choice_answers=" a)Excellent\n b)Good\n c)Ok\n d)Fair\n e)Shit\n\n";
    string instruc;
    instruc="\n\n Please enter a,b,c,d,e\n\n";

// what is the players name?
    cout<<enter_full_name_instuc;
    cin>>fname>>mname>>lname;
    fullname= fname+" "+mname+" "+lname+"";
    cout<<greeting<<fname;

// giving instructions to player
    cout<< instruc;

// question 1
    cout<<Q1;
    cout<<multiple_choice_answers;
    cin>>A1;

// question 2
    cout<<Q2;
    cout<<multiple_choice_answers;
    cin>>A2;

// question 3
    cout<<Q3;
    cout<<multiple_choice_answers;
    cin>>A3;

// question 4
    cout<<Q4;
    cout<<multiple_choice_answers;
    cin>>A4;

// question 5
    cout<<Q5;
    cin>>A5;

// question 6
    cout<<Q6;
    cin>>A6;

// question 7
    cout<<Q7;
    cin>>A7;

// question 8
    cout<<Q8;
    cin>>A8;

// question 9
    cout<<Q9;
    cin>>A9;

// print answers
    cout<<"Answer for Question 1) -\t"+A1+"\n";
    cout<<"Answer for Question 2) -\t"+A2+"\n";
    cout<<"Answer for Question 3) -\t"+A3+"\n";
    cout<<"Answer for Question 4) -\t"+A4+"\n";
    cout<<"Answer for Question 5) -\t"+A5+"\n";
    cout<<"Answer for Question 6) -\t"+A6+"\n";
    cout<<"Answer for Question 7) -\t"+A7+"\n";
    cout<<"Answer for Question 8) -\t"+A8+"\n";
    cout<<"Answer for Question 9) -\t"+A9+"\n";

// save to file
    ofstream answers("/tmp/9_questions.csv", ios::app);
    answers<<fullname<<","<<A1<<","<<A2<<","<<A3<<","<<A4<<","<<A5<<","<<A6<<","<<A7<<","<<A8<<","<<A9<<"\n";

// END
    return 0;
}
