#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t allied_movement_speed_pct; // 0x17f8            
            bool m_bAllowMovement; // 0x17fc            
            uint8_t _pad17fd[0x3]; // 0x17fd
            source2sdk::client::ParticleIndex_t m_nDebuffImmuneEffect; // 0x1800            
            uint8_t _pad1804[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison) == 0x1808);
    };
};
