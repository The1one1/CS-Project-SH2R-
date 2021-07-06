#ifndef feedback_hpp
#define feedback_hpp
#include<bits/stdc++.h>

class feedback
{
public:
    int rating;   //for rating out of 5
    char f_back[550],name[30];
    feedback *next;
    feedback()  //constructor
    {
        rating=5;
        strcpy(name,"Rahul Sharma");
        strcpy(f_back,"Nice coffee");
        next=0;
    }
    ~feedback(); //distructor
};
void newfeedback();    //function to add new feedback
void printfeedback();   //functio to print added feedback

#endif
