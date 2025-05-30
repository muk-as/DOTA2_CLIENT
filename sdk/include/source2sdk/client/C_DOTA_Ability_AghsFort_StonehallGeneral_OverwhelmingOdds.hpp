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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t max_steps; // 0x680            
            Vector m_vTarget; // 0x684            
            Vector m_vDir; // 0x690            
            std::int32_t m_nSteps; // 0x69c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6a0            
            uint8_t _pad06a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds) == 0x6a8);
    };
};
