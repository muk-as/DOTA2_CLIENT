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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ArtyLevelObjectInstance_t : public source2sdk::client::ArtyGameObjectInstance_t
        {
        public:
            CUtlString m_szLeftBorderObject; // 0x_            
            float m_flLeftObjectOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_szRightBorderObject; // 0x_            
            float m_flRightObjectOffset; // 0x_            
            bool m_bRandomPosition; // 0x_            
            bool m_bRepositionToTerrain; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flLeftBorderWidthMult; // 0x_            
            float m_flRightBorderWidthMult; // 0x_            
            float m_flAppearanceChance; // 0x_            
            source2sdk::client::EArtyTeam m_eTeam; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTimeOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecCustomOrders has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ArtyEnemyOrder_t> m_vecCustomOrders;
            char m_vecCustomOrders[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in ArtyLevelObjectInstance_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::ArtyLevelObjectInstance_t) == 0x_);
    };
};
