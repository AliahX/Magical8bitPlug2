/*
  ==============================================================================

    Settings.cpp
    Created: 23 May 2019 11:54:44am
    Author:  除村 武志

  ==============================================================================
*/

#include "Settings.h"
#include "FrameSequenceParser.h"

bool SettingRefs::setSequenceWithString (const String& type, const String& input, ParseError* error)
{
    FrameSequenceParser parser;

    if (type == "volume")
    {
        FrameSequence res = parser.parse (input, 0, 15, error);

        if (*error > kParseErrorLevelFatal)
        {
            return false;
        }

        volumeSequence = res;
        volumeSequenceString = input;
        return true;
    }
    else if (type == "coarsePitch")
    {
        FrameSequence res = parser.parse (input, -64, 63, error);

        if (*error > kParseErrorLevelFatal)
        {
            return false;
        }

        coarsePitchSequence = res;
        coarsePitchSequenceString = input;
        return true;
    }
    else if (type == "finePitch")
    {
        FrameSequence res = parser.parse (input, -64, 63, error);

        if (*error > kParseErrorLevelFatal)
        {
            return false;
        }

        finePitchSequence = res;
        finePitchSequenceString = input;
        return true;
    }
    else if (type == "duty")
    {
        FrameSequence res = parser.parse (input, 0, 2, error);

        if (*error > kParseErrorLevelFatal)
        {
            return false;
        }

        dutySequence = res;
        dutySequenceString = input;
        return true;
    }

    printf ("*** parameter type invalid!\n");
    return false;
}

String& SettingRefs::getSequenceString (const String& type)
{
    if (type == "volume")
    {
        return volumeSequenceString;
    }
    else if (type == "coarsePitch")
    {
        return coarsePitchSequenceString;
    }
    else if (type == "finePitch")
    {
        return finePitchSequenceString;
    }
    else if (type == "duty")
    {
        return dutySequenceString;
    }

    printf ("*** parameter type invalid!\n");
    return volumeSequenceString;
}
