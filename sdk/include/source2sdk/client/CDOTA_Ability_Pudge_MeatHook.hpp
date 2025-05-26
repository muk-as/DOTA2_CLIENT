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
        // Size: 0x6d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
        #pragma pack(push, 1)
        class CDOTA_Ability_Pudge_MeatHook : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vEndpoint; // 0x680            
            // metadata: MNetworkEnable
            std::int32_t m_nConsecutiveHits; // 0x68c            
            bool m_bIsVectorTargeted; // 0x690            
            uint8_t _pad0691[0x3]; // 0x691
            Vector m_vTurnLocation; // 0x694            
            Vector m_vDirectionAfterTurn; // 0x6a0            
            bool m_bHasTurned; // 0x6ac            
            uint8_t _pad06ad[0x3]; // 0x6ad
            float m_flDistanceAfterTurn; // 0x6b0            
            Vector m_vFinalPosition; // 0x6b4            
            float reveal_duration; // 0x6c0            
            std::int32_t curve_hook; // 0x6c4            
            float curve_hook_turn_rate; // 0x6c8            
            std::int32_t curve_hook_debug; // 0x6cc            
            float m_fTimeRemaining; // 0x6d0            
            float m_flFacingTarget; // 0x6d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Pudge_MeatHook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Pudge_MeatHook) == 0x6d8);
    };
};
