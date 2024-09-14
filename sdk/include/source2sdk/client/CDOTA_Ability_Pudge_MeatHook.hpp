#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
    #pragma pack(push, 1)
    class CDOTA_Ability_Pudge_MeatHook : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vEndpoint; // 0x5d8        
        // metadata: MNetworkEnable
        int32_t m_nConsecutiveHits; // 0x5e4        
        bool m_bIsVectorTargeted; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5e9[0x3]; // 0x5e9
        Vector m_vTurnLocation; // 0x5ec        
        Vector m_vDirectionAfterTurn; // 0x5f8        
        bool m_bHasTurned; // 0x604        
        [[maybe_unused]] std::uint8_t pad_0x605[0x3]; // 0x605
        float m_flDistanceAfterTurn; // 0x608        
        Vector m_vFinalPosition; // 0x60c        
        float reveal_duration; // 0x618        
        int32_t curve_hook; // 0x61c        
        float curve_hook_turn_rate; // 0x620        
        int32_t curve_hook_debug; // 0x624        
        float m_fTimeRemaining; // 0x628        
        float m_flFacingTarget; // 0x62c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Pudge_MeatHook because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Pudge_MeatHook) == 0x630);
};
