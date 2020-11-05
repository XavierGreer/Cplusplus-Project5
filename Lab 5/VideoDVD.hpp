//  VideoDVD.hpp
//  Lab 5
//
//  Created by Xavier Greer on 12/3/17.
//  Copyright © 2017 Xavier Greer. All rights reserved.
#ifndef VideoDVD_hpp
#define VideoDVD_hpp
#include <stdio.h>
#include "Media.hpp"

class VideoDVD: public Media{
public:
    VideoDVD();
    VideoDVD(const string &InTitle,
             const string & InArtist,
             const string & InWherePurchased,
             const float & InCost,
             const Time & InRunningTime,
             const int & inNumberOfScenes,
             const int & inCurrentScene);
    void LoadMedia(const string &InTitle,
                   const string & InArtist,
                   const string & InWherePurchased,
                   const float & InCost,
                   const Time & InRunningTime,
                   const int & inNumberOfScenes,
                   const int & inCurrentScene);
    
    virtual string GetTitle() const;
    virtual string GetArtist() const;
    virtual string GetWherePurchased() const;
    virtual float GetCost() const;
    virtual Time GetRunningTime() const;
    int GetNumberOfScenes() const;
    int GetCurrentScene() const;
    
    virtual void Play();
    virtual void FastForward();
    virtual void Rewind();
    virtual void PrintMedia(ostream & Out) const;
             
protected:
    int NumberOfScenes;
    int CurrentScene;
};
#endif /* VideoDVD_hpp */
