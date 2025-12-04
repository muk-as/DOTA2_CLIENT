#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
#include "source2sdk/animgraphlib/FootstepJumpPhase_t.hpp"
#include "source2sdk/animgraphlib/FootstepLandedFootSoundType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "FootstepLanded Tag"
        #pragma pack(push, 1)
        class CFootstepLandedAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Footstep Type"
            source2sdk::animgraphlib::FootstepLandedFootSoundType_t m_FootstepType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Override Sound"
            // metadata: MPropertyAttributeChoiceName "Sound"
            CUtlString m_OverrideSoundName; // 0x_            
            // metadata: MPropertyFriendlyName "Debug Name"
            CUtlString m_DebugAnimSourceString; // 0x_            
            // metadata: MPropertyFriendlyName "Bone Name"
            // metadata: MPropertyAttributeChoiceName "Bone"
            CUtlString m_BoneName; // 0x_            
            // metadata: MPropertyFriendlyName "Jump Phase"
            source2sdk::animgraphlib::FootstepJumpPhase_t m_footstepJumpPhase; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFootstepLandedAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFootstepLandedAnimTag) == 0x_);
    };
};
