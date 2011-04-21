#include <iostream>
#include <fstream>
#include "main.h"
using namespace std;

int main(int argc, char* argv[])
{

// define instructions
    string greeting;
    greeting="Hello ";
    string instruc;
    instruc="\n\n Please enter a,b,c,d,e:\n\n";
    string multiple_choice_answers;
    multiple_choice_answers=" a)Excellent\n b)Good\n c)Ok\n d)Fair\n e)Shit\n\n";

// define player
    string fullname, fname, mname, lname,enter_full_name_instuc;
    enter_full_name_instuc="please enter full name\n\n";

// what is the players name?
    cout<<enter_full_name_instuc;
    cin>>fname>>mname>>lname;
    fullname=fname+" "+mname+" "+lname;
    cout<<greeting<<fname;
    cout<<instruc;

// define questions
    string questions[8];
    questions[0]="How are you?\n\n";
    questions[1]="How is the weather?\n\n";
    questions[2]="How would you rate .... ??\n\n";
    questions[3]="Do you like .... ?\n\n";
    questions[4]="What is your age?\n\n";
    questions[5]="What time is it?\n";
    questions[6]="Are you working ... ?\n\n";
    questions[7]="How do you feel about working there?\n\n";
    questions[8]="How long have you worked there?\n\n";

// define answers
    string answers[8];

// ask questions
    for(int i=0; i<=8; i++) {
        cout<<questions[i];
        cout<<multiple_choice_answers;
        cin>>answers[i];
    }

// print and save answers
    ofstream save_answers("/tmp/9_questions.csv", ios::app);
    save_answers<<fullname;
    for(int i=0; i<=8; i++) {
        cout<<"A"<<i<<": "<<answers[i]<<"\n";
        save_answers<<","<<answers[i];
    }
    save_answers<<"\n";

// END
    return 0;
}
