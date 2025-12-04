#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CBoneConstraintBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBoneConstraintDotToMorph : public source2sdk::modellib::CBoneConstraintBase
        {
        public:
            CUtlString m_sBoneName; // 0x_            
            CUtlString m_sTargetBoneName; // 0x_            
            CUtlString m_sMorphChannelName; // 0x_            
            float m_flRemap[4]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBoneConstraintDotToMorph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CBoneConstraintDotToMorph) == 0x_);
    };
};
