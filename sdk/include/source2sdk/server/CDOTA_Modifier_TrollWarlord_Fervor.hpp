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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_TrollWarlord_Fervor : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t max_stacks; // 0x1878            
            std::int32_t stack_limit_during_battle_trance; // 0x187c            
            std::int32_t extra_attack_chance_per_stack; // 0x1880            
            std::int32_t base_chance; // 0x1884            
            // m_hUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hUnit;
            char m_hUnit[0x4]; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TrollWarlord_Fervor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TrollWarlord_Fervor) == 0x1890);
    };
};
