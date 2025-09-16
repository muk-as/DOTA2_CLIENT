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
        // Size: 0x1f30
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_Wisp : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            source2sdk::client::ParticleIndex_t m_nAmbientFXIndex; // 0x1f18            
            source2sdk::client::ParticleIndex_t m_nStunnedFXIndex; // 0x1f1c            
            source2sdk::client::ParticleIndex_t m_nTalkFXIndex; // 0x1f20            
            source2sdk::client::ParticleIndex_t m_nIllusionFXIndex; // 0x1f24            
            bool m_bParticleHexed; // 0x1f28            
            bool m_bParticleStunned; // 0x1f29            
            bool m_bDetermineAmbientEffect; // 0x1f2a            
            uint8_t _pad1f2b[0x1]; // 0x1f2b
            float m_flPrevHealth; // 0x1f2c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_Wisp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_Wisp) == 0x1f30);
    };
};
