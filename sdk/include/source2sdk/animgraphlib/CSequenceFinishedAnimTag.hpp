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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x60
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Sequence Finished Tag"
        #pragma pack(push, 1)
        class CSequenceFinishedAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad0050[0x8]; // 0x50
            // metadata: MPropertyFriendlyName "Sequence"
            // metadata: MPropertyAttributeChoiceName "Sequence"
            CUtlString m_sequenceName; // 0x58            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSequenceFinishedAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSequenceFinishedAnimTag) == 0x60);
    };
};
