#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CSoundPatch;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x640
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Puck_IllusoryOrb : public server::CDOTABaseAbility
    {
    public:
        int32_t m_iProjectile; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4]; // 0x5cc
        server::CountdownTimer m_ViewerTimer; // 0x5d0        
        int32_t curve_orb; // 0x5e8        
        float m_fTimeRemaining; // 0x5ec        
        Vector m_vVectorTargetEndpoint; // 0x5f0        
        Vector m_vCurveAcceleration; // 0x5fc        
        Vector m_vStartPosition; // 0x608        
        float orb_vision; // 0x614        
        float max_distance; // 0x618        
        float vision_duration; // 0x61c        
        int32_t damage; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x624[0x4]; // 0x624
        client::CSoundPatch* m_pSoundPatch; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x630[0x8]; // 0x630
        client::ParticleIndex_t m_nCurvePathFXIndex; // 0x638        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Puck_IllusoryOrb because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Puck_IllusoryOrb) == 0x640);
};
