//  VideoVHS.hpp
//  Lab 5
//
//  Created by Xavier Greer on 12/3/17.
//  Copyright © 2017 Xavier Greer. All rights reserved.
#ifndef VideoVHS_hpp
#define VideoVHS_hpp
#include <stdio.h>
#include "Media.hpp"

class VideoVHS: public Media{
public:
    VideoVHS();
    VideoVHS(const string &InTitle,
             const string & InArtist,
             const string & InWherePurchased,
             const float & InCost,
             const Time & InRunningTime,
             const int & inNumberOfTracks,
             const int & inCurrentTrack);
    void LoadMedia(const string &InTitle,
                   const string & InArtist,
                   const string & InWherePurchased,
                   const float & InCost,
                   const Time & InRunningTime,
                   const int & inNumberOfTracks,
                   const int & inCurrentTrack);
    
    virtual string GetTitle() const;
    virtual string GetArtist() const;
    virtual string GetWherePurchased() const;
    virtual float GetCost() const;
    virtual Time GetRunningTime() const;
    int GetNumberOfTracks() const;
    int GetCurrentTrack() const;

    virtual void Play();
    virtual void FastForward();
    virtual void Rewind();
    virtual void PrintMedia(ostream & Out) const;
protected:
    int NumberOfTracks;
    int CurrentTrack;
};

#endif /* VideoVHS_hpp */
