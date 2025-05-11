#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CShmupBossDefinition.hpp"
#include "source2sdk/client/CShmupPlayerDefinition.hpp"

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
        // Size: 0xb8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupGameDefinition
        {
        public:
            float m_flGameWidth; // 0x0            
            float m_flGameHeight; // 0x4            
            float m_flBossFightDuration; // 0x8            
            std::int32_t m_nComboBaseScore; // 0xc            
            source2sdk::client::CShmupPlayerDefinition m_player; // 0x10            
            source2sdk::client::CShmupBossDefinition m_boss; // 0x70            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupGameDefinition, m_flGameWidth) == 0x0);
        static_assert(offsetof(source2sdk::client::CShmupGameDefinition, m_flGameHeight) == 0x4);
        static_assert(offsetof(source2sdk::client::CShmupGameDefinition, m_flBossFightDuration) == 0x8);
        static_assert(offsetof(source2sdk::client::CShmupGameDefinition, m_nComboBaseScore) == 0xc);
        static_assert(offsetof(source2sdk::client::CShmupGameDefinition, m_player) == 0x10);
        static_assert(offsetof(source2sdk::client::CShmupGameDefinition, m_boss) == 0x70);
        
        static_assert(sizeof(source2sdk::client::CShmupGameDefinition) == 0xb8);
    };
};
