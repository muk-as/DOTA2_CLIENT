#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
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
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1948
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_FacelessVoid_TimeZone_Effect : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<CHandle<source2sdk::server::CDOTABaseAbility>,40> m_vecAbilities;
            char m_vecAbilities[0xb8]; // 0x1878            
            std::int32_t bonus_move_speed; // 0x1930            
            std::int32_t bonus_attack_speed; // 0x1934            
            std::int32_t bonus_cast_speed; // 0x1938            
            std::int32_t bonus_turn_speed; // 0x193c            
            std::int32_t cooldown_acceleration; // 0x1940            
            uint8_t _pad1944[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_FacelessVoid_TimeZone_Effect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_FacelessVoid_TimeZone_Effect) == 0x1948);
    };
};
