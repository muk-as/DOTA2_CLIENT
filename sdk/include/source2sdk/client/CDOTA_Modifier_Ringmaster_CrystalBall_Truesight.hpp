#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Ringmaster_CrystalBall_Truesight : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            float truesight_linger_duration; // 0x17fc            
            source2sdk::client::ParticleIndex_t m_nAllyFXIndex; // 0x1800            
            source2sdk::client::ParticleIndex_t m_nEnemyFXIndex; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_CrystalBall_Truesight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_CrystalBall_Truesight) == 0x1808);
    };
};
