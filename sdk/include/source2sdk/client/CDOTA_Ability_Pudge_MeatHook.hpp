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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
        #pragma pack(push, 1)
        class CDOTA_Ability_Pudge_MeatHook : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vEndpoint; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nConsecutiveHits; // 0x_            
            bool m_bIsVectorTargeted; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vTurnLocation; // 0x_            
            Vector m_vDirectionAfterTurn; // 0x_            
            bool m_bHasTurned; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDistanceAfterTurn; // 0x_            
            Vector m_vFinalPosition; // 0x_            
            float reveal_duration; // 0x_            
            std::int32_t curve_hook; // 0x_            
            float curve_hook_turn_rate; // 0x_            
            std::int32_t curve_hook_debug; // 0x_            
            float m_fTimeRemaining; // 0x_            
            float m_flFacingTarget; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Pudge_MeatHook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Pudge_MeatHook) == 0x_);
    };
};
