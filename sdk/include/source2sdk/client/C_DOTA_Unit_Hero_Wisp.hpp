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
        // Size: 0x1db0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_Wisp : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            source2sdk::client::ParticleIndex_t m_nAmbientFXIndex; // 0x1d98            
            source2sdk::client::ParticleIndex_t m_nStunnedFXIndex; // 0x1d9c            
            source2sdk::client::ParticleIndex_t m_nTalkFXIndex; // 0x1da0            
            source2sdk::client::ParticleIndex_t m_nIllusionFXIndex; // 0x1da4            
            bool m_bParticleHexed; // 0x1da8            
            bool m_bParticleStunned; // 0x1da9            
            bool m_bDetermineAmbientEffect; // 0x1daa            
            uint8_t _pad1dab[0x1]; // 0x1dab
            float m_flPrevHealth; // 0x1dac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Wisp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_Wisp) == 0x1db0);
    };
};
