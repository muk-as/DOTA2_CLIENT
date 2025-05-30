#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FantasyCraftingGemSlotData_t.hpp"
#include "source2sdk/client/FantasyTabletID_t.hpp"
#include "source2sdk/client/Fantasy_Roles.hpp"

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
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyCraftingTabletData_t
        {
        public:
            // metadata: MPropertyDescription "Unique ID for the Tablet"
            source2sdk::client::FantasyTabletID_t m_unID; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            // metadata: MPropertyDescription "What role is this tablet for"
            source2sdk::client::Fantasy_Roles m_eRole; // 0x4            
            // m_vecGemSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftingGemSlotData_t> m_vecGemSlots;
            char m_vecGemSlots[0x18]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftingTabletData_t, m_unID) == 0x0);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTabletData_t, m_eRole) == 0x4);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTabletData_t, m_vecGemSlots) == 0x8);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftingTabletData_t) == 0x20);
    };
};
