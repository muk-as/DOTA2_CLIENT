#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_DeathProphet_CarrionSwarm : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float start_radius; // 0x_            
            float end_radius; // 0x_            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x_            
            float m_fTotalTime; // 0x_            
            std::int32_t m_nProjectileHandle; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_DeathProphet_CarrionSwarm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_DeathProphet_CarrionSwarm) == 0x_);
    };
};
