#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/client/style_index_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMatch3OpponentHeroItemDefinition
        {
        public:
            source2sdk::client::item_definition_index_t m_unItemDef; // 0x0            
            source2sdk::client::style_index_t m_nStyleIndex; // 0x4            
            uint8_t _pad0005[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMatch3OpponentHeroItemDefinition, m_unItemDef) == 0x0);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentHeroItemDefinition, m_nStyleIndex) == 0x4);
        
        static_assert(sizeof(source2sdk::client::CMatch3OpponentHeroItemDefinition) == 0x8);
    };
};
