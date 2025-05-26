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
        class CDOTA_Ability_FacelessVoid_Innate_DistortionField : public source2sdk::server::CDOTABaseAbility
        {
        public:
            CUtlString m_strCachedDependencyAbility; // 0x5c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_FacelessVoid_Innate_DistortionField because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_FacelessVoid_Innate_DistortionField) == 0x5c8);
    };
};
