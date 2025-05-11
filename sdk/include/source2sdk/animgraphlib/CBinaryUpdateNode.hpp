#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/BinaryNodeTiming.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x90
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBinaryUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad0058[0x8]; // 0x58
            source2sdk::animgraphlib::CAnimUpdateNodeRef m_pChild1; // 0x60            
            source2sdk::animgraphlib::CAnimUpdateNodeRef m_pChild2; // 0x70            
            source2sdk::animgraphlib::BinaryNodeTiming m_timingBehavior; // 0x80            
            float m_flTimingBlend; // 0x84            
            bool m_bResetChild1; // 0x88            
            bool m_bResetChild2; // 0x89            
            uint8_t _pad008a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBinaryUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBinaryUpdateNode) == 0x90);
    };
};
