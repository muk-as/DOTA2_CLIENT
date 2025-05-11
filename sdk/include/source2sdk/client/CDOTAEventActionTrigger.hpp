#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAEventActionTrigger
        {
        public:
            CUtlString m_sEventAction; // 0x0            
            std::int32_t m_unEventScoreRequired; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            CUtlString m_sMapClassToAdd; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAEventActionTrigger, m_sEventAction) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAEventActionTrigger, m_unEventScoreRequired) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAEventActionTrigger, m_sMapClassToAdd) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CDOTAEventActionTrigger) == 0x18);
    };
};
