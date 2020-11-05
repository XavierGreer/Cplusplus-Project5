//  AudioCassette.hpp
//  Lab 5
//
//  Created by Xavier Greer on 12/3/17.
//  Copyright © 2017 Xavier Greer. All rights reserved.
#ifndef AudioCassette_hpp
#define AudioCassette_hpp
#include <stdio.h>
#include "Media.hpp"

class AudioCassette : public Media{
public:
    AudioCassette();
    AudioCassette(const string &InTitle,
                  const string & InArtist,
                  const string & InWherePurchased,
                  const float & InCost,
                  const Time & InRunningTime,
                  const int & inNumberOfSelections,
                  const int & inCurrentSelection);
    
    void SetCurrentSelection(int inCurrentSelection);

    virtual string GetTitle() const;
    virtual string GetArtist() const;
    virtual string GetWherePurchased() const;
    virtual float GetCost() const;
    virtual Time GetRunningTime() const;
    int GetNumberOfSelections() const;
    int GetCurrentSelection() const;
    
    virtual void Play();
    virtual void FastForward();
    virtual void Rewind();
    
    virtual void PrintMedia(ostream & Out) const;
    
    void LoadMedia(const string &InTitle,
                      const string & InArtist,
                      const string & InWherePurchased,
                      const float & InCost,
                      const Time & InRunningTime,
                      const int & inNumberOfSelections,
                      const int & inCurrentSelection);
protected:
    int NumberOfSelections;
    int CurrentSelection;
};
#endif /* AudioCassette_hpp */
