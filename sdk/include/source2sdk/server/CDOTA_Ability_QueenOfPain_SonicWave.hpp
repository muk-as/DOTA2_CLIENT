#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Size: 0x5c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_QueenOfPain_SonicWave : public server::CDOTABaseAbility
    {
    public:
        entity2::GameTime_t m_fStartTime; // 0x5a0        
        float m_fTotalTime; // 0x5a4        
        client::ParticleIndex_t m_nFXIndex; // 0x5a8        
        int32_t starting_aoe; // 0x5ac        
        int32_t final_aoe; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b4[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_QueenOfPain_SonicWave because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_QueenOfPain_SonicWave) == 0x5c0);
};
