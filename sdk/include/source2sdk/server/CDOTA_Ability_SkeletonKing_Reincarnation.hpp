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
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_SkeletonKing_Reincarnation : public source2sdk::server::CDOTABaseAbility
        {
        public:
            bool m_bShouldUseResources; // 0x5b8            
            uint8_t _pad05b9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_SkeletonKing_Reincarnation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_SkeletonKing_Reincarnation) == 0x5c0);
    };
};
