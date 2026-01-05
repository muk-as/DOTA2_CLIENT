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
        // static metadata: MNetworkVarNames "bool m_bFirstSongPlayed"
        // static metadata: MNetworkVarNames "float m_flSongStartTime"
        // static metadata: MNetworkVarNames "int m_nBurstEffect"
        // static metadata: MNetworkVarNames "int m_nFailEffect"
        #pragma pack(push, 1)
        class C_DOTA_Ability_Largo_AmphibianRhapsody : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float duration; // 0x_            
            float rhythm_grace_period; // 0x_            
            float movement_burst_duration; // 0x_            
            float slow_resistance_burst_duration; // 0x_            
            float radius; // 0x_            
            float heal_burst; // 0x_            
            std::int32_t max_stacks; // 0x_            
            float burst_damage; // 0x_            
            float damage_per_stack; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFirstSongPlayed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flSongStartTime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBurstEffectChanged"
            std::int32_t m_nBurstEffect; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFailEffectChanged"
            std::int32_t m_nFailEffect; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecClientSideOriginalAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<char*> m_vecClientSideOriginalAbilities;
            char m_vecClientSideOriginalAbilities[0x_]; // 0x_            
            std::int32_t m_nInvalidOrders; // 0x_            
            std::int32_t m_nSelectedUnitChanged; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Largo_AmphibianRhapsody because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Largo_AmphibianRhapsody) == 0x_);
    };
};
