#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1e80
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_Wisp : public server::CDOTA_BaseNPC_Hero
    {
    public:
        client::ParticleIndex_t m_nAmbientFXIndex; // 0x1e68        
        client::ParticleIndex_t m_nStunnedFXIndex; // 0x1e6c        
        client::ParticleIndex_t m_nTalkFXIndex; // 0x1e70        
        client::ParticleIndex_t m_nIllusionFXIndex; // 0x1e74        
        bool m_bParticleHexed; // 0x1e78        
        bool m_bParticleStunned; // 0x1e79        
        bool m_bDetermineAmbientEffect; // 0x1e7a        
        [[maybe_unused]] std::uint8_t pad_0x1e7b[0x1]; // 0x1e7b
        float m_flPrevHealth; // 0x1e7c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_Wisp because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_Wisp) == 0x1e80);
};