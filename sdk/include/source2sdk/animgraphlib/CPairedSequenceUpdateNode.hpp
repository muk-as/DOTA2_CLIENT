#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CSequenceUpdateNodeBase.hpp"

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
        // Size: 0x88
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPairedSequenceUpdateNode : public source2sdk::animgraphlib::CSequenceUpdateNodeBase
        {
        public:
            CGlobalSymbol m_sPairedSequenceRole; // 0x78            
            uint8_t _pad0080[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPairedSequenceUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CPairedSequenceUpdateNode) == 0x88);
    };
};
