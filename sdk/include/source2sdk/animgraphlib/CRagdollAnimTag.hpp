#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"

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
        // static metadata: MPropertyFriendlyName "Ragdoll Tag"
        #pragma pack(push, 1)
        class CRagdollAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Profile Name"
            // metadata: MPropertySortPriority "100"
            CGlobalSymbol m_profileName; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CRagdollAnimTag) == 0x_);
    };
};
