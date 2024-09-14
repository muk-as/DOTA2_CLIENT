#pragma once
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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CShmupEventEnemySpawn
    {
    public:
        CUtlString m_strEnemyName; // 0x0        
        bool m_bRed; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x3]; // 0x9
        Vector m_vOffset; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x18[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CShmupEventEnemySpawn, m_strEnemyName) == 0x0);
    static_assert(offsetof(CShmupEventEnemySpawn, m_bRed) == 0x8);
    static_assert(offsetof(CShmupEventEnemySpawn, m_vOffset) == 0xc);
    
    static_assert(sizeof(CShmupEventEnemySpawn) == 0x20);
};
