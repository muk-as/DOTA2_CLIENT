#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dazzle_NothlProjection_SoulDebuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t ethereal_damage_bonus; // 0x17f8            
            std::int32_t movement_slow; // 0x17fc            
            // m_hPhysicalBody has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPhysicalBody;
            char m_hPhysicalBody[0x4]; // 0x1800            
            source2sdk::client::ParticleIndex_t m_nTetherFXIndex; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dazzle_NothlProjection_SoulDebuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dazzle_NothlProjection_SoulDebuff) == 0x1808);
    };
};
