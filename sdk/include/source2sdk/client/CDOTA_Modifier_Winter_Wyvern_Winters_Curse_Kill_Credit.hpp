#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1878            
            bool transfer_on_death; // 0x1890            
            uint8_t _pad1891[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit) == 0x1898);
    };
};
