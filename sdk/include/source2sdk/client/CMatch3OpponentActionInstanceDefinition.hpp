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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMatch3OpponentActionInstanceDefinition
        {
        public:
            CUtlString m_sActionName; // 0x_            
            float m_flCooldown; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            KeyValues3 m_kvActionParams; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMatch3OpponentActionInstanceDefinition, m_sActionName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentActionInstanceDefinition, m_flCooldown) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentActionInstanceDefinition, m_kvActionParams) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMatch3OpponentActionInstanceDefinition) == 0x_);
    };
};
