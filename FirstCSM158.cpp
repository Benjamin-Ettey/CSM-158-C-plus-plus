#include <iostream>
using namespace std;
int main()
{
    cout<<"Welcome to the KNUST Grading System Platform.\n";
    cout<<"Want to check your grade?  Follow the prompts...\n";
    cout<<"Enter your name: ";
    string name;
    cin>>name;

    string coursename;

    int coursenumber;
    cout<<"Hello, "<<name<<". Enter the number of courses to check:\n";
    double score;

    cin>>coursenumber;
    int i=0;
    
    while (i<coursenumber)
    {
        cout<<"Enter your course name: \n";
        cin>>coursename;
        cout<<"Enter your score: \n";

        cin>>score;
        if (score<100 and score>=70)
            cout<<"You had First Class\n";
        else if (score<70 and score>=60)        
            cout<<"You had Second Class Upper\n";
        else if (score<60 and score>=50)
            cout<<"You had Second Class Lower\n";
        else if (score<50 and score>=40)
            cout<<"You had Third Class\n";
        else if (score<40)
            cout<<"You had a Pass\n";
        else if (score>100 or score<0) 
            cout<<"Sorry, the grade point cannot exceed this limit";
        i=i+1;
    
    }



   

   
    
    return 0;
    
}