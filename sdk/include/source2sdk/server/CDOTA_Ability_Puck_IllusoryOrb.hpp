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
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Puck_IllusoryOrb : public server::CDOTABaseAbility
    {
    public:
        int32_t m_iProjectile; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x4]; // 0x5a4
        server::CountdownTimer m_ViewerTimer; // 0x5a8        
        int32_t curve_orb; // 0x5c0        
        float m_fTimeRemaining; // 0x5c4        
        Vector m_vVectorTargetEndpoint; // 0x5c8        
        Vector m_vCurveAcceleration; // 0x5d4        
        Vector m_vStartPosition; // 0x5e0        
        float orb_vision; // 0x5ec        
        float max_distance; // 0x5f0        
        float vision_duration; // 0x5f4        
        int32_t damage; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0x4]; // 0x5fc
        client::CSoundPatch* m_pSoundPatch; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x608[0x8]; // 0x608
        client::ParticleIndex_t m_nCurvePathFXIndex; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Puck_IllusoryOrb because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Puck_IllusoryOrb) == 0x618);
};
