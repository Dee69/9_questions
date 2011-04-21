#include <iostream>
#include <fstream>
#include "main.h"
using namespace std;

int main()
{

// definitions
    string greeting, instructions, full_name_instuctions, multiple_choice_options, full_name, first_name, middle_name, last_name;
    greeting="Bienvenue  ";
    instructions="Please enter a,b,c,d,e:";
    multiple_choice_options=" a)Excellent\n b)Good\n c)Ok\n d)Fair\n e)Shit\n";
    full_name_instuctions="please enter your full name:";

// what is the players name?
    cout<<full_name_instuctions<<endl;
    cin>>first_name>>middle_name>>last_name;
    full_name=first_name+" "+middle_name+" "+last_name;
    cout<<greeting<<first_name<<endl;
    cout<<instructions<<endl;

// define questions and answers
    string questions[15], answers[15];
    questions[1]="How are you?";
    questions[2]="How is the weather?";
    questions[3]="How would you rate "+first_name+"?";
    questions[4]="Do you like "+first_name+"?";
    questions[5]="What is your age?";
    questions[6]="What time is it?";
    questions[7]="Are you working at the weekend?";
    questions[8]="How do you feel about working there?";
    questions[9]="How long have you worked there?";
    questions[10]="What is your favourite colour?";
    questions[11]="Who do you most admire?";
    questions[12]="Why do birds sing so gay?";
    questions[13]="How much is that doggy in the window?";
    questions[14]="When was the last time you saw "+first_name+"?";

// ask questions get answers
    for(int i=1; i<=14; i++) {
        cout<<i<<": "<<questions[i]<<endl;
        cout<<multiple_choice_options;
        cin>>answers[i];
    }

// print and save answers
    cout<<"ANSWERS:"<<endl;
    ofstream save_answers("/tmp/9_questions.csv", ios::app);
    save_answers<<full_name;
    for(int i=1; i<=14; i++) {
        cout<<"Question "<<i<<": "<<answers[i]<<endl;
        save_answers<<", "<<answers[i];
    }
    save_answers<<"\n";

// END
    return 0;
}
