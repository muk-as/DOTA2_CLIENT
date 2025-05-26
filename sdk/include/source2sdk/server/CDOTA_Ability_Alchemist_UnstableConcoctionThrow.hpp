#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Alchemist_UnstableConcoctionThrow : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float m_fCookTime; // 0x5c0            
            Vector m_vProjectileLoc; // 0x5c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Alchemist_UnstableConcoctionThrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Alchemist_UnstableConcoctionThrow) == 0x5d0);
    };
};
