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
    // Size: 0x1c10
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_Wisp : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        client::ParticleIndex_t m_nAmbientFXIndex; // 0x1bf8        
        client::ParticleIndex_t m_nStunnedFXIndex; // 0x1bfc        
        client::ParticleIndex_t m_nTalkFXIndex; // 0x1c00        
        client::ParticleIndex_t m_nIllusionFXIndex; // 0x1c04        
        bool m_bParticleHexed; // 0x1c08        
        bool m_bParticleStunned; // 0x1c09        
        bool m_bDetermineAmbientEffect; // 0x1c0a        
        [[maybe_unused]] std::uint8_t pad_0x1c0b[0x1]; // 0x1c0b
        float m_flPrevHealth; // 0x1c0c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Wisp because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Hero_Wisp) == 0x1c10);
};
