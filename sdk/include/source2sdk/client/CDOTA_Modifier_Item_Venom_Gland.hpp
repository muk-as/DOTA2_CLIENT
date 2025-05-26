#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Venom_Gland : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t primary_attribute; // 0x1878            
            std::int32_t debuff_amp; // 0x187c            
            float duration; // 0x1880            
            uint8_t _pad1884[0x4]; // 0x1884
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1888            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Venom_Gland because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Venom_Gland) == 0x18a0);
    };
};
