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
        // Size: 0x518
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicRelay : public source2sdk::client::CLogicalEntity
        {
        public:
            bool m_bDisabled; // 0x510            
            bool m_bWaitForRefire; // 0x511            
            bool m_bTriggerOnce; // 0x512            
            bool m_bFastRetrigger; // 0x513            
            bool m_bPassthoughCaller; // 0x514            
            uint8_t _pad0515[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicRelay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CLogicRelay) == 0x518);
    };
};
