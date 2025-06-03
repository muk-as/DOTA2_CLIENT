#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rubick_SpellSteal : public source2sdk::client::CDOTA_Buff
        {
        public:
            CUtlString m_strActivityModifier; // 0x1878            
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0x1880            
            bool m_bUsesTwoSlots; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            std::int32_t stolen_debuff_amp; // 0x189c            
            float stolen_mana_reduction; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_SpellSteal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rubick_SpellSteal) == 0x18a8);
    };
};
