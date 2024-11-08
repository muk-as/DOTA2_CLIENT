#pragma once
#include "source2sdk/client/ArtyEnemyOrder_t.hpp"
#include "source2sdk/client/ArtyGameObjectInstance_t.hpp"
#include "source2sdk/client/EArtyTeam.hpp"
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
    // Standard-layout class: false
    // Size: 0x88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ArtyLevelObjectInstance_t : public client::ArtyGameObjectInstance_t
    {
    public:
        CUtlString m_szLeftBorderObject; // 0x38        
        float m_flLeftObjectOffset; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4]; // 0x44
        CUtlString m_szRightBorderObject; // 0x48        
        float m_flRightObjectOffset; // 0x50        
        bool m_bRandomPosition; // 0x54        
        bool m_bRepositionToTerrain; // 0x55        
        [[maybe_unused]] std::uint8_t pad_0x56[0x2]; // 0x56
        float m_flLeftBorderWidthMult; // 0x58        
        float m_flRightBorderWidthMult; // 0x5c        
        float m_flAppearanceChance; // 0x60        
        client::EArtyTeam m_eTeam; // 0x64        
        [[maybe_unused]] std::uint8_t pad_0x65[0x3]; // 0x65
        float m_flTimeOffset; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x6c[0x4]; // 0x6c
        // m_vecCustomOrders has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ArtyEnemyOrder_t> m_vecCustomOrders;
        char m_vecCustomOrders[0x18]; // 0x70        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in ArtyLevelObjectInstance_t because it is not a standard-layout class
    static_assert(sizeof(ArtyLevelObjectInstance_t) == 0x88);
};
