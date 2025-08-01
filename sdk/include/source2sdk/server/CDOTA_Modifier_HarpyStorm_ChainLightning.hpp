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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_HarpyStorm_ChainLightning : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t jump_range; // 0x1878            
            std::int32_t max_targets; // 0x187c            
            float damage_percent_loss; // 0x1880            
            float m_flCurDamage; // 0x1884            
            Vector m_vJumpPosition; // 0x1888            
            uint8_t _pad1894[0x4]; // 0x1894
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1898            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_HarpyStorm_ChainLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_HarpyStorm_ChainLightning) == 0x18b0);
    };
};
