#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x698
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_DeathProphet_CarrionSwarm : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float start_radius; // 0x680            
            float end_radius; // 0x684            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x688            
            float m_fTotalTime; // 0x68c            
            std::int32_t m_nProjectileHandle; // 0x690            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x694            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_DeathProphet_CarrionSwarm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_DeathProphet_CarrionSwarm) == 0x698);
    };
};
