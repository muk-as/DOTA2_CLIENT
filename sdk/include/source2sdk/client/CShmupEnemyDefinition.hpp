#pragma once
#include "source2sdk/client/CShmupBulletInfo.hpp"
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
    // Size: 0x80
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CShmupEnemyDefinition
    {
    public:
        CUtlString m_strNameInMap; // 0x0        
        int32_t m_nHealth; // 0x8        
        float m_flHitboxRadius; // 0xc        
        Vector m_vHitboxOffsetWS; // 0x10        
        int32_t m_nKillScore; // 0x1c        
        float m_flModelScale; // 0x20        
        bool m_bIsBoss; // 0x24        
        [[maybe_unused]] std::uint8_t pad_0x25[0x3]; // 0x25
        // metadata: MPropertySuppressExpr "m_type != k_eShmupPathEventType_Shoot"
        // m_vecBulletPatterns has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CShmupBulletInfo> m_vecBulletPatterns;
        char m_vecBulletPatterns[0x18]; // 0x28        
        // m_vecOnDeathBulletPatterns has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CShmupBulletInfo> m_vecOnDeathBulletPatterns;
        char m_vecOnDeathBulletPatterns[0x18]; // 0x40        
        // m_vecSelfDestroyBulletPatterns has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CShmupBulletInfo> m_vecSelfDestroyBulletPatterns;
        char m_vecSelfDestroyBulletPatterns[0x18]; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x70[0x10];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CShmupEnemyDefinition, m_strNameInMap) == 0x0);
    static_assert(offsetof(CShmupEnemyDefinition, m_nHealth) == 0x8);
    static_assert(offsetof(CShmupEnemyDefinition, m_flHitboxRadius) == 0xc);
    static_assert(offsetof(CShmupEnemyDefinition, m_vHitboxOffsetWS) == 0x10);
    static_assert(offsetof(CShmupEnemyDefinition, m_nKillScore) == 0x1c);
    static_assert(offsetof(CShmupEnemyDefinition, m_flModelScale) == 0x20);
    static_assert(offsetof(CShmupEnemyDefinition, m_bIsBoss) == 0x24);
    static_assert(offsetof(CShmupEnemyDefinition, m_vecBulletPatterns) == 0x28);
    static_assert(offsetof(CShmupEnemyDefinition, m_vecOnDeathBulletPatterns) == 0x40);
    static_assert(offsetof(CShmupEnemyDefinition, m_vecSelfDestroyBulletPatterns) == 0x58);
    
    static_assert(sizeof(CShmupEnemyDefinition) == 0x80);
};
