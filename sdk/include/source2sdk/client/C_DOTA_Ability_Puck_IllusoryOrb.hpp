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
    // Size: 0x660
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Puck_IllusoryOrb : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_iProjectile; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4]; // 0x604
        client::CountdownTimer m_ViewerTimer; // 0x608        
        int32_t curve_orb; // 0x620        
        float m_fTimeRemaining; // 0x624        
        Vector m_vVectorTargetEndpoint; // 0x628        
        Vector m_vCurveAcceleration; // 0x634        
        Vector m_vStartPosition; // 0x640        
        float orb_vision; // 0x64c        
        float max_distance; // 0x650        
        float vision_duration; // 0x654        
        int32_t damage; // 0x658        
        client::ParticleIndex_t m_nCurvePathPreviewFXIndex; // 0x65c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Puck_IllusoryOrb because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Puck_IllusoryOrb) == 0x660);
};
