//  Time.cpp
//  Lab 5
//
//  Created by Xavier Greer on 12/3/17.
//  Copyright © 2017 Xavier Greer. All rights reserved.
#include "Time.hpp"

ostream & operator<<(ostream & Out, Time & RHS){return Out << RHS.GetTime();}
Time::Time(int InMinutes){Minutes = InMinutes;}
void Time::SetTime(int NewMinutes){Minutes = NewMinutes;}
int Time::GetTime() const {return Minutes;}
