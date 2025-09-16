#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1f28
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_ArcWarden : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            source2sdk::client::ParticleIndex_t m_nTalkFXIndex; // 0x1f18            
            source2sdk::client::ParticleIndex_t m_nFXDeath; // 0x1f1c            
            source2sdk::client::ParticleIndex_t m_nTempestFX; // 0x1f20            
            uint8_t _pad1f24[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_ArcWarden because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_ArcWarden) == 0x1f28);
    };
};
