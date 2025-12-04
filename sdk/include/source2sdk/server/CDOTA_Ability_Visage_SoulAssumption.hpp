#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        class CDOTA_Ability_Visage_SoulAssumption : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float m_fDamage; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            std::int32_t m_iForcedStacks; // 0x_            
            std::int32_t m_nGold; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Visage_SoulAssumption because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Visage_SoulAssumption) == 0x_);
    };
};
