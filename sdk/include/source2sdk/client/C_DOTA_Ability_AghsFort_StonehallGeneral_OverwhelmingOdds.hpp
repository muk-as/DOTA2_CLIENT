#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        #pragma pack(push, 1)
        class C_DOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t max_steps; // 0x_            
            Vector m_vTarget; // 0x_            
            Vector m_vDir; // 0x_            
            std::int32_t m_nSteps; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds) == 0x_);
    };
};
