#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_EMP : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t area_of_effect; // 0x17f8            
            std::int32_t mana_burned; // 0x17fc            
            float damage_per_mana; // 0x1800            
            float spell_lifesteal; // 0x1804            
            float spell_amp; // 0x1808            
            std::int32_t self_mana_restore_pct; // 0x180c            
            // m_hPullThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPullThinker;
            char m_hPullThinker[0x4]; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_EMP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Invoker_EMP) == 0x1818);
    };
};
