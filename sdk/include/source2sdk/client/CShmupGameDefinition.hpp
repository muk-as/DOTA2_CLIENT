#pragma once
#include "source2sdk/client/CShmupBossDefinition.hpp"
#include "source2sdk/client/CShmupPlayerDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        int32_t m_nComboBaseScore; // 0xc        
        client::CShmupPlayerDefinition m_player; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x6c[0x4]; // 0x6c
        client::CShmupBossDefinition m_boss; // 0x70        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CShmupGameDefinition, m_flGameWidth) == 0x0);
    static_assert(offsetof(CShmupGameDefinition, m_flGameHeight) == 0x4);
    static_assert(offsetof(CShmupGameDefinition, m_flBossFightDuration) == 0x8);
    static_assert(offsetof(CShmupGameDefinition, m_nComboBaseScore) == 0xc);
    static_assert(offsetof(CShmupGameDefinition, m_player) == 0x10);
    static_assert(offsetof(CShmupGameDefinition, m_boss) == 0x70);
    
    static_assert(sizeof(CShmupGameDefinition) == 0xb8);
};
