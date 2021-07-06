#ifndef feedback_h
#define feedback_h
#include<bits/stdc++.h>

namespace example
{
    class feedback
    {
        public:
            int rating;   //for rating out of 5
            char f_back[550], name[30];
            feedback *next;
            feedback()  //constructor
            {
                rating=5;
                strcpy(name, "Rahul Sharma");
                strcpy(f_back, "Nice coffee");
                next=0;
            }
            ~feedback(); //destructor
    };
    void newfeedback();    //function to add new feedback
    void printfeedback();   //functio to print added feedback
}
#endif