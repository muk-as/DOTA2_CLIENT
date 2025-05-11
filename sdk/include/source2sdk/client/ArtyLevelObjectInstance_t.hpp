#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ArtyEnemyOrder_t.hpp"
#include "source2sdk/client/ArtyGameObjectInstance_t.hpp"
#include "source2sdk/client/EArtyTeam.hpp"

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
        // Standard-layout class: false
        // Size: 0x88
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ArtyLevelObjectInstance_t : public source2sdk::client::ArtyGameObjectInstance_t
        {
        public:
            CUtlString m_szLeftBorderObject; // 0x38            
            float m_flLeftObjectOffset; // 0x40            
            uint8_t _pad0044[0x4]; // 0x44
            CUtlString m_szRightBorderObject; // 0x48            
            float m_flRightObjectOffset; // 0x50            
            bool m_bRandomPosition; // 0x54            
            bool m_bRepositionToTerrain; // 0x55            
            uint8_t _pad0056[0x2]; // 0x56
            float m_flLeftBorderWidthMult; // 0x58            
            float m_flRightBorderWidthMult; // 0x5c            
            float m_flAppearanceChance; // 0x60            
            source2sdk::client::EArtyTeam m_eTeam; // 0x64            
            uint8_t _pad0065[0x3]; // 0x65
            float m_flTimeOffset; // 0x68            
            uint8_t _pad006c[0x4]; // 0x6c
            // m_vecCustomOrders has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ArtyEnemyOrder_t> m_vecCustomOrders;
            char m_vecCustomOrders[0x18]; // 0x70            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in ArtyLevelObjectInstance_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::ArtyLevelObjectInstance_t) == 0x88);
    };
};
