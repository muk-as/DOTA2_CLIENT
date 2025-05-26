#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CLogicalEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicRelay : public source2sdk::client::CLogicalEntity
        {
        public:
            bool m_bDisabled; // 0x5e0            
            bool m_bWaitForRefire; // 0x5e1            
            bool m_bTriggerOnce; // 0x5e2            
            bool m_bFastRetrigger; // 0x5e3            
            bool m_bPassthoughCaller; // 0x5e4            
            uint8_t _pad05e5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicRelay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CLogicRelay) == 0x5e8);
    };
};
