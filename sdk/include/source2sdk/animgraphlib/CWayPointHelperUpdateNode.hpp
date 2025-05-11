#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"

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
        // Size: 0x80
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CWayPointHelperUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad0070[0x4]; // 0x70
            float m_flStartCycle; // 0x74            
            float m_flEndCycle; // 0x78            
            bool m_bOnlyGoals; // 0x7c            
            bool m_bPreventOvershoot; // 0x7d            
            bool m_bPreventUndershoot; // 0x7e            
            uint8_t _pad007f[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CWayPointHelperUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CWayPointHelperUpdateNode) == 0x80);
    };
};
