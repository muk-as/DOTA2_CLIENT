#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
        #pragma pack(push, 1)
        class CDOTA_Ability_Pudge_MeatHook : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vEndpoint; // 0x688            
            // metadata: MNetworkEnable
            std::int32_t m_nConsecutiveHits; // 0x694            
            bool m_bIsVectorTargeted; // 0x698            
            uint8_t _pad0699[0x3]; // 0x699
            Vector m_vTurnLocation; // 0x69c            
            Vector m_vDirectionAfterTurn; // 0x6a8            
            bool m_bHasTurned; // 0x6b4            
            uint8_t _pad06b5[0x3]; // 0x6b5
            float m_flDistanceAfterTurn; // 0x6b8            
            Vector m_vFinalPosition; // 0x6bc            
            float reveal_duration; // 0x6c8            
            std::int32_t curve_hook; // 0x6cc            
            float curve_hook_turn_rate; // 0x6d0            
            std::int32_t curve_hook_debug; // 0x6d4            
            float m_fTimeRemaining; // 0x6d8            
            float m_flFacingTarget; // 0x6dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Pudge_MeatHook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Pudge_MeatHook) == 0x6e0);
    };
};
