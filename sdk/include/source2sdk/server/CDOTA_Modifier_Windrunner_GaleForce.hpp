#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Windrunner_GaleForce : public client::CDOTA_Buff
    {
    public:
        Vector m_vEndpoint; // 0x16e8        
        Vector m_vFlowPosition; // 0x16f4        
        Vector m_vPull; // 0x1700        
        client::ParticleIndex_t m_nFXIndex; // 0x170c        
        entity2::GameTime_t m_flLastThinkTime; // 0x1710        
        float wind_strength; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1718[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_GaleForce because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Windrunner_GaleForce) == 0x1720);
};
