#pragma once
#include "source2sdk/soundsystem/CSosGroupBranchPattern.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x30
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSosGroupMatchPattern : public soundsystem::CSosGroupBranchPattern
    {
    public:
        // metadata: MPropertyFriendlyName "Event Name"
        CUtlString m_matchSoundEventName; // 0x10        
        // metadata: MPropertyFriendlyName "Sub-String"
        CUtlString m_matchSoundEventSubString; // 0x18        
        // metadata: MPropertyFriendlyName "Source Entity Index"
        float m_flEntIndex; // 0x20        
        // metadata: MPropertyFriendlyName "Opvar Float"
        float m_flOpvar; // 0x24        
        // metadata: MPropertyFriendlyName "Opvar String"
        CUtlString m_opvarString; // 0x28        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSosGroupMatchPattern because it is not a standard-layout class
    static_assert(sizeof(CSosGroupMatchPattern) == 0x30);
};
