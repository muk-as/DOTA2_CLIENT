#pragma once
#include "source2sdk/client/CShmupEventEnemySpawn.hpp"
#include "source2sdk/client/EShmupEventType.hpp"
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
    // Size: 0x40
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CShmupEventDefinition
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        client::EShmupEventType m_type; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // metadata: MPropertySuppressExpr "m_type != k_eShmupEventType_SpawnEnemy"
        // m_vecEnemySpawns has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CShmupEventEnemySpawn> m_vecEnemySpawns;
        char m_vecEnemySpawns[0x18]; // 0x10        
        // metadata: MPropertySuppressExpr "m_type != k_eShmupEventType_SpawnEnemy"
        CUtlString m_strPathName; // 0x28        
        // metadata: MPropertySuppressExpr "m_type != k_eShmupEventType_UI"
        CUtlString m_strUIEvent; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x38[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CShmupEventDefinition, m_type) == 0x8);
    static_assert(offsetof(CShmupEventDefinition, m_vecEnemySpawns) == 0x10);
    static_assert(offsetof(CShmupEventDefinition, m_strPathName) == 0x28);
    static_assert(offsetof(CShmupEventDefinition, m_strUIEvent) == 0x30);
    
    static_assert(sizeof(CShmupEventDefinition) == 0x40);
};
