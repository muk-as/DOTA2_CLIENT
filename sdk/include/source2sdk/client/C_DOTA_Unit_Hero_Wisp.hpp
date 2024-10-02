#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1ba8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_Wisp : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        client::ParticleIndex_t m_nAmbientFXIndex; // 0x1b90        
        client::ParticleIndex_t m_nStunnedFXIndex; // 0x1b94        
        client::ParticleIndex_t m_nTalkFXIndex; // 0x1b98        
        client::ParticleIndex_t m_nIllusionFXIndex; // 0x1b9c        
        bool m_bParticleHexed; // 0x1ba0        
        bool m_bParticleStunned; // 0x1ba1        
        bool m_bDetermineAmbientEffect; // 0x1ba2        
        [[maybe_unused]] std::uint8_t pad_0x1ba3[0x1]; // 0x1ba3
        float m_flPrevHealth; // 0x1ba4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Wisp because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Hero_Wisp) == 0x1ba8);
};
