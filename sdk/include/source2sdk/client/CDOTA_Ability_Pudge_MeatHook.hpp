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
    // Size: 0x658
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
    #pragma pack(push, 1)
    class CDOTA_Ability_Pudge_MeatHook : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vEndpoint; // 0x600        
        // metadata: MNetworkEnable
        int32_t m_nConsecutiveHits; // 0x60c        
        bool m_bIsVectorTargeted; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x611[0x3]; // 0x611
        Vector m_vTurnLocation; // 0x614        
        Vector m_vDirectionAfterTurn; // 0x620        
        bool m_bHasTurned; // 0x62c        
        [[maybe_unused]] std::uint8_t pad_0x62d[0x3]; // 0x62d
        float m_flDistanceAfterTurn; // 0x630        
        Vector m_vFinalPosition; // 0x634        
        float reveal_duration; // 0x640        
        int32_t curve_hook; // 0x644        
        float curve_hook_turn_rate; // 0x648        
        int32_t curve_hook_debug; // 0x64c        
        float m_fTimeRemaining; // 0x650        
        float m_flFacingTarget; // 0x654        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Pudge_MeatHook because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Pudge_MeatHook) == 0x658);
};
