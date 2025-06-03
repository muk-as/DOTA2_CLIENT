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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DeathProphet_SpiritSiphon : public source2sdk::client::CDOTA_Buff
        {
        public:
            float flSmoothness; // 0x1878            
            float damage; // 0x187c            
            float damage_pct; // 0x1880            
            std::int32_t drain_range; // 0x1884            
            float haunt_duration; // 0x1888            
            std::int32_t siphon_buffer; // 0x188c            
            std::int32_t movement_steal; // 0x1890            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1894            
            source2sdk::client::ParticleIndex_t m_iLinkIndex; // 0x1898            
            std::int32_t m_nSelfBuffSerialNumber; // 0x189c            
            std::int32_t m_nTargetDebuffSerialNumber; // 0x18a0            
            bool m_bAppliedFear; // 0x18a4            
            uint8_t _pad18a5[0x3]; // 0x18a5
            float shard_fear_duration; // 0x18a8            
            float shard_consecutive_siphon_duration; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_SpiritSiphon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DeathProphet_SpiritSiphon) == 0x18b0);
    };
};
