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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enchantress_Bunny_Hop : public source2sdk::client::CDOTA_Buff
        {
        public:
            float hop_duration; // 0x1888            
            std::int32_t hop_height; // 0x188c            
            std::int32_t hop_distance; // 0x1890            
            float m_flStartZ; // 0x1894            
            float m_flCurTime; // 0x1898            
            float m_flJumpDuration; // 0x189c            
            float m_flJumpHeight; // 0x18a0            
            Vector m_vTargetHorizontalDirection; // 0x18a4            
            // hUnitsToHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hUnitsToHit;
            char hUnitsToHit[0x18]; // 0x18b0            
            bool m_bLaunched; // 0x18c8            
            uint8_t _pad18c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_Bunny_Hop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enchantress_Bunny_Hop) == 0x18d0);
    };
};
