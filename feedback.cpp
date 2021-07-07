#include<bits/stdc++.h>
#include"feedback.h"
using namespace std;

namespace example
{
    feedback *head=0, *new_feedback, *temp;     //class objects

    void newfeedback()      // function to take feedback
    {
        new_feedback=new feedback;      //allocte memory dynamically
        
        cout<<"Rating out of 5 ::";
        cin>>new_feedback->rating;      //rating
        
        cout<<"name::";
        cin.ignore();
        cin.clear();
        cin.getline(new_feedback->name,30);     //name
        
        cout<<"enter you feedback(150)::";
        cin.ignore();
        cin.clear();
        cin.getline(new_feedback->f_back,550);      //feedback
        
        new_feedback->next=0;
        if(head==0) 
        {
            temp=head=new_feedback;
        }
        else{
            temp->next=new_feedback;
            temp=new_feedback;
        }  
    }

    void printfeedback()    //function to print added feedback
    {
        temp=head;
        while(temp!=0)
        {
            cout<<"\nName:";
            cout.write(temp->name,30)<<"\n";    //to print name
            
            cout<<"Rating:"<<temp->rating<<"\n";    //to print rating out of 5
            
            cout<<"Feedback:\n";
            cout.write(temp->f_back,550)<<endl;     //to print feedback
            
            temp=temp->next;    //for next feedback
            cout<<"\n";
        }
    }
}