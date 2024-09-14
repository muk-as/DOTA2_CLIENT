#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Puck_IllusoryOrb : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_iProjectile; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4]; // 0x5dc
        client::CountdownTimer m_ViewerTimer; // 0x5e0        
        int32_t curve_orb; // 0x5f8        
        float m_fTimeRemaining; // 0x5fc        
        Vector m_vVectorTargetEndpoint; // 0x600        
        Vector m_vCurveAcceleration; // 0x60c        
        Vector m_vStartPosition; // 0x618        
        float orb_vision; // 0x624        
        float max_distance; // 0x628        
        float vision_duration; // 0x62c        
        int32_t damage; // 0x630        
        client::ParticleIndex_t m_nCurvePathPreviewFXIndex; // 0x634        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Puck_IllusoryOrb because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Puck_IllusoryOrb) == 0x638);
};
