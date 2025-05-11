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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
        #pragma pack(push, 1)
        class CDOTA_Ability_Pudge_MeatHook : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vEndpoint; // 0x5b0            
            // metadata: MNetworkEnable
            std::int32_t m_nConsecutiveHits; // 0x5bc            
            bool m_bIsVectorTargeted; // 0x5c0            
            uint8_t _pad05c1[0x3]; // 0x5c1
            Vector m_vTurnLocation; // 0x5c4            
            Vector m_vDirectionAfterTurn; // 0x5d0            
            bool m_bHasTurned; // 0x5dc            
            uint8_t _pad05dd[0x3]; // 0x5dd
            float m_flDistanceAfterTurn; // 0x5e0            
            Vector m_vFinalPosition; // 0x5e4            
            float reveal_duration; // 0x5f0            
            std::int32_t curve_hook; // 0x5f4            
            float curve_hook_turn_rate; // 0x5f8            
            std::int32_t curve_hook_debug; // 0x5fc            
            float m_fTimeRemaining; // 0x600            
            float m_flFacingTarget; // 0x604            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Pudge_MeatHook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Pudge_MeatHook) == 0x608);
    };
};
