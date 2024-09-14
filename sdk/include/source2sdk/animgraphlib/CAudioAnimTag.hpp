#pragma once
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x70
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Audio Tag"
    #pragma pack(push, 1)
    class CAudioAnimTag : public animgraphlib::CAnimTagBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x50[0x8]; // 0x50
        // metadata: MPropertyFriendlyName "Sound Event"
        // metadata: MPropertyAttributeEditor "SoundPicker()"
        CUtlString m_clipName; // 0x58        
        // metadata: MPropertyFriendlyName "Attachment"
        // metadata: MPropertyAttributeChoiceName "Attachment"
        CUtlString m_attachmentName; // 0x60        
        // metadata: MPropertyFriendlyName "Volume"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flVolume; // 0x68        
        // metadata: MPropertyFriendlyName "Stop on Tag End"
        bool m_bStopWhenTagEnds; // 0x6c        
        // metadata: MPropertyFriendlyName "Stop When Graph Destroyed"
        bool m_bStopWhenGraphEnds; // 0x6d        
        // metadata: MPropertyFriendlyName "Play on Server"
        bool m_bPlayOnServer; // 0x6e        
        // metadata: MPropertyFriendlyName "Play on Client"
        bool m_bPlayOnClient; // 0x6f        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAudioAnimTag because it is not a standard-layout class
    static_assert(sizeof(CAudioAnimTag) == 0x70);
};
