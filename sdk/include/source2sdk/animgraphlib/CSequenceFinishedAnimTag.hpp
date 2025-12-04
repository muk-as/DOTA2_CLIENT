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
        // static metadata: MPropertyFriendlyName "Sequence Finished Tag"
        #pragma pack(push, 1)
        class CSequenceFinishedAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Sequence"
            // metadata: MPropertyAttributeChoiceName "Sequence"
            CUtlString m_sequenceName; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSequenceFinishedAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSequenceFinishedAnimTag) == 0x_);
    };
};
