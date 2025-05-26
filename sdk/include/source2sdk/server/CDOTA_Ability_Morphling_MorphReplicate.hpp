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
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Morphling_MorphReplicate : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float m_flOldHealthPct; // 0x5c0            
            float m_flOldManaPct; // 0x5c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Morphling_MorphReplicate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Morphling_MorphReplicate) == 0x5c8);
    };
};
