#pragma once
#include <iostream>
#include "LeakedObjectDetector.h"
#include "ShelterOfCats.h"
#include "Safeway.h"


struct CommerceBureau
{
    ShelterOfCats kittenMeet;
    Safeway oDistrict;
    CommerceBureau();
    ~CommerceBureau();
    bool permissionUpdate(int currentYear, int permissionYear);
    double taxPaidRequirment(bool forProfit, double tax);
    void memberG();
    JUCE_LEAK_DETECTOR(CommerceBureau)
};
