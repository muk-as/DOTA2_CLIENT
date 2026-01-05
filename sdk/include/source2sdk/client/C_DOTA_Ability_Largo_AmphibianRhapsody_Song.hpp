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
        // static metadata: MNetworkVarNames "bool m_bInRhythmTiming"
        #pragma pack(push, 1)
        class C_DOTA_Ability_Largo_AmphibianRhapsody_Song : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t double_song; // 0x_            
            float song_cost_reduction_per_stack; // 0x_            
            // metadata: MNetworkEnable
            bool m_bInRhythmTiming; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Largo_AmphibianRhapsody_Song because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Largo_AmphibianRhapsody_Song) == 0x_);
    };
};
