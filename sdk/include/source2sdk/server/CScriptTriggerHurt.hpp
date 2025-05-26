#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTriggerHurt.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa48
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CScriptTriggerHurt : public source2sdk::server::CTriggerHurt
        {
        public:
            Vector m_vExtent; // 0xa38            
            uint8_t _pad0a44[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CScriptTriggerHurt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CScriptTriggerHurt) == 0xa48);
    };
};
