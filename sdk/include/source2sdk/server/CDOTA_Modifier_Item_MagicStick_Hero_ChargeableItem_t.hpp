#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Item;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CDOTA_Modifier_Item_MagicStick_Hero_ChargeableItem_t
        {
        public:
            // m_hItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Item> m_hItem;
            char m_hItem[0x4]; // 0x0            
            float m_flChargeRadius; // 0x4            
            std::int32_t m_nMaxCharges; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_Modifier_Item_MagicStick_Hero_ChargeableItem_t, m_hItem) == 0x0);
        static_assert(offsetof(source2sdk::server::CDOTA_Modifier_Item_MagicStick_Hero_ChargeableItem_t, m_flChargeRadius) == 0x4);
        static_assert(offsetof(source2sdk::server::CDOTA_Modifier_Item_MagicStick_Hero_ChargeableItem_t, m_nMaxCharges) == 0x8);
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_MagicStick_Hero_ChargeableItem_t) == 0xc);
    };
};
