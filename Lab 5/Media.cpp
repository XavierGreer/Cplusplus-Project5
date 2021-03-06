//  Media.cpp
//  Lab 5
//
//  Created by Xavier Greer on 12/3/17.
//  Copyright © 2017 Xavier Greer. All rights reserved.
#include "Media.hpp"

Media::Media(){
    Title = "";
    Artist = "";
    WherePurchased = "";
    Cost = 0;
    MediaAtBeginning = false;
    MediaAtEnd = false;
    RunningTime = 0;
}
Media::Media(const string &InTitle,
             const string & InArtist,
             const string & InWherePurchased,
             const float & InCost,
             const Time & InRunningTime){
    Title = InTitle;
    Artist = InArtist;
    WherePurchased = InWherePurchased;
    Cost = InCost;
    RunningTime = InRunningTime;
}

string Media::GetTitle() const{return Title;}
string Media::GetArtist() const{return Artist;}
string Media::GetWherePurchased() const{return WherePurchased;}
float Media::GetCost() const{return Cost;}
Time Media::GetRunningTime() const{return RunningTime.GetTime();}

bool Media::IsMediaAtBeginning(int currentTrack) const{
    if (currentTrack == 1)
    {
        return true;
    }
    else return false;
}
bool Media::IsMediaAtEnd(int currentTrack ,int endTrack) const{
    if (currentTrack == endTrack)
    {
        return true;
    }
    else return false;
}

void Media::LoadMedia(const string &InTitle,
                      const string & InArtist,
                      const string & InWherePurchased,
                      const float & InCost,
                      const Time & InRunningTime,
                      const int & inNumberOfSelections,
                      const int & inCurrentSelection){
    Title = InTitle;
    Artist = InArtist;
    WherePurchased = InWherePurchased;
    Cost = InCost;
    RunningTime = InRunningTime;
}

void Media::PrintMedia(ostream & Out) const{
    cout << "Title:     " << Media::Title <<
    "\nArtist:    " << Media::Artist <<
    "\nPurchased: " <<  Media::WherePurchased <<
    "\nCost:      $" <<  Media::Cost << endl;
}
