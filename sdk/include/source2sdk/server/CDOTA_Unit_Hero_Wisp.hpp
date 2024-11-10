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
    // Size: 0x1ea8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_Wisp : public server::CDOTA_BaseNPC_Hero
    {
    public:
        client::ParticleIndex_t m_nAmbientFXIndex; // 0x1e90        
        client::ParticleIndex_t m_nStunnedFXIndex; // 0x1e94        
        client::ParticleIndex_t m_nTalkFXIndex; // 0x1e98        
        client::ParticleIndex_t m_nIllusionFXIndex; // 0x1e9c        
        bool m_bParticleHexed; // 0x1ea0        
        bool m_bParticleStunned; // 0x1ea1        
        bool m_bDetermineAmbientEffect; // 0x1ea2        
        [[maybe_unused]] std::uint8_t pad_0x1ea3[0x1]; // 0x1ea3
        float m_flPrevHealth; // 0x1ea4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_Wisp because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_Wisp) == 0x1ea8);
};
