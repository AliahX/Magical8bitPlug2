/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.1.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "AdvancedParamsComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
AdvancedParamsComponent::AdvancedParamsComponent (Magical8bitPlug2AudioProcessor& p)
    : processor(p)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    volumeCompo.reset (new CustomEnvelopeComponent (p, "volume", "Volume", "isVolumeSequenceEnabled_raw"));
    addAndMakeVisible (volumeCompo.get());
    volumeCompo->setName ("volume component");

    label5.reset (new juce::Label ("new label",
                                   TRANS("Custom Envelopes")));
    addAndMakeVisible (label5.get());
    label5->setFont (juce::Font (17.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    label5->setJustificationType (juce::Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    label5->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    label5->setBounds (0, 4, 150, 24);

    coarsePitchCompo.reset (new CustomEnvelopeComponent (p, "coarsePitch", "Coarse Pitch", "isCoarsePitchSequenceEnabled_raw"));
    addAndMakeVisible (coarsePitchCompo.get());
    coarsePitchCompo->setName ("coarse pitch component");

    finePitchCompo.reset (new CustomEnvelopeComponent (p, "finePitch", "Fine Pitch", "isFinePitchSequenceEnabled_raw"));
    addAndMakeVisible (finePitchCompo.get());
    finePitchCompo->setName ("fine pitch component");

    dutyCompo.reset (new CustomEnvelopeComponent (p, "duty", "Duty", "isDutySequenceEnabled_raw"));
    addAndMakeVisible (dutyCompo.get());
    dutyCompo->setName ("duty component");

    fineModeChoice.reset (new ChoiceComponent (p, "finePitchSequenceMode_raw", "Mode"));
    addAndMakeVisible (fineModeChoice.get());
    fineModeChoice->setName ("Mode");


    //[UserPreSize]
    //[/UserPreSize]

    setSize (700, 272);


    //[Constructor] You can add your own custom stuff here..
    p.settingRefs.volumeSequenceListener = (FrameSequenceChangeListener*)volumeCompo.get();
    p.settingRefs.coarsePitchSequenceListener = (FrameSequenceChangeListener*)coarsePitchCompo.get();
    p.settingRefs.finePitchSequenceListener = (FrameSequenceChangeListener*)finePitchCompo.get();
    p.settingRefs.dutySequenceListener = (FrameSequenceChangeListener*)dutyCompo.get();
    //[/Constructor]
}

AdvancedParamsComponent::~AdvancedParamsComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    volumeCompo = nullptr;
    label5 = nullptr;
    coarsePitchCompo = nullptr;
    finePitchCompo = nullptr;
    dutyCompo = nullptr;
    fineModeChoice = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void AdvancedParamsComponent::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void AdvancedParamsComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    volumeCompo->setBounds (0, 26, getWidth() - 160, 56);
    coarsePitchCompo->setBounds (0, 82, getWidth() - 160, 56);
    finePitchCompo->setBounds (0, 138, getWidth() - 204, 56);
    dutyCompo->setBounds (0, 194, getWidth() - 160, 56);
    fineModeChoice->setBounds (getWidth() - 4 - 200, 142, 200, 28);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="AdvancedParamsComponent"
                 componentName="" parentClasses="public Component" constructorParams="Magical8bitPlug2AudioProcessor&amp; p"
                 variableInitialisers="processor(p)" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="1" initialWidth="700"
                 initialHeight="216">
  <BACKGROUND backgroundColour="ffffff"/>
  <GENERICCOMPONENT name="volume component" id="829adedfc4b9300f" memberName="volumeCompo"
                    virtualName="" explicitFocusOrder="0" pos="0 26 160M 56" class="CustomEnvelopeComponent"
                    params="p, &quot;volume&quot;, &quot;Volume&quot;, &quot;isVolumeSequenceEnabled_raw&quot;"/>
  <LABEL name="new label" id="bae3132bcad681ce" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="0 4 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Custom Envelopes" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="17.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <GENERICCOMPONENT name="coarse pitch component" id="30dd6e142bdc9ed5" memberName="coarsePitchCompo"
                    virtualName="" explicitFocusOrder="0" pos="0 82 204M 56" class="CustomEnvelopeComponent"
                    params="p, &quot;coarsePitch&quot;, &quot;Coarse Pitch&quot;, &quot;isCoarsePitchSequenceEnabled_raw&quot;"/>
  <GENERICCOMPONENT name="fine pitch component" id="30dd6e142bdc9ed5" memberName="finePitchCompo"
                    virtualName="" explicitFocusOrder="0" pos="0 82 204M 56" class="CustomEnvelopeComponent"
                    params="p, &quot;finePitch&quot;, &quot;Fine Pitch&quot;, &quot;isFinePitchSequenceEnabled_raw&quot;"/>
  <GENERICCOMPONENT name="duty component" id="e5e04cf3ca5aec1" memberName="dutyCompo"
                    virtualName="" explicitFocusOrder="0" pos="0 138 160M 56" class="CustomEnvelopeComponent"
                    params="p, &quot;duty&quot;, &quot;Duty&quot;, &quot;isDutySequenceEnabled_raw&quot;"/>
  <GENERICCOMPONENT name="Mode" id="950de1eb69e47c4c" memberName="fineModeChoice"
                    virtualName="" explicitFocusOrder="0" pos="4Rr 142 200 28" class="ChoiceComponent"
                    params="p, &quot;finePitchSequenceMode_raw&quot;, &quot;Mode&quot;"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

