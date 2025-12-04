#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSequenceUpdateNodeBase : public source2sdk::animgraphlib::CLeafUpdateNode
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_playbackSpeed; // 0x_            
            bool m_bLoop; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSequenceUpdateNodeBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSequenceUpdateNodeBase) == 0x_);
    };
};
