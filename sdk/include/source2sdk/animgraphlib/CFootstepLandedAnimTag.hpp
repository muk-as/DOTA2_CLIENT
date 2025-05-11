#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/FootstepLandedFootSoundType_t.hpp"
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x78
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "FootstepLanded Tag"
        #pragma pack(push, 1)
        class CFootstepLandedAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad0050[0x8]; // 0x50
            // metadata: MPropertyFriendlyName "Footstep Type"
            source2sdk::animationsystem::FootstepLandedFootSoundType_t m_FootstepType; // 0x58            
            uint8_t _pad005c[0x4]; // 0x5c
            // metadata: MPropertyFriendlyName "Override Sound"
            // metadata: MPropertyAttributeChoiceName "Sound"
            CUtlString m_OverrideSoundName; // 0x60            
            // metadata: MPropertyFriendlyName "Debug Name"
            CUtlString m_DebugAnimSourceString; // 0x68            
            // metadata: MPropertyFriendlyName "Bone Name"
            // metadata: MPropertyAttributeChoiceName "Bone"
            CUtlString m_BoneName; // 0x70            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFootstepLandedAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFootstepLandedAnimTag) == 0x78);
    };
};
