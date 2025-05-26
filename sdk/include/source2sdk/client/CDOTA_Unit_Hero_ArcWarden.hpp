#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1da8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_ArcWarden : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            source2sdk::client::ParticleIndex_t m_nTalkFXIndex; // 0x1d98            
            source2sdk::client::ParticleIndex_t m_nFXDeath; // 0x1d9c            
            source2sdk::client::ParticleIndex_t m_nTempestFX; // 0x1da0            
            uint8_t _pad1da4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_ArcWarden because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Unit_Hero_ArcWarden) == 0x1da8);
    };
};
