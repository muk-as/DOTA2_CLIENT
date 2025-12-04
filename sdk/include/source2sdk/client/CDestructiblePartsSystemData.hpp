#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDestructiblePartsSystemData_HitGroupInfoAndDamageLevels.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/tier2/CRangeInt.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MModelGameData
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDestructiblePartsSystemData
        {
        public:
            // metadata: MPropertyDescription "Destructible Parts"
            // m_PartsDataByHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::HitGroup_t,source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndDamageLevels> m_PartsDataByHitGroup;
            char m_PartsDataByHitGroup[0x_]; // 0x_            
            // metadata: MPropertyDescription "Min/Max number parts to destroy when gibbing"
            source2sdk::tier2::CRangeInt m_nMinMaxNumberHitGroupsToDestroyWhenGibbing; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData, m_PartsDataByHitGroup) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData, m_nMinMaxNumberHitGroupsToDestroyWhenGibbing) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsSystemData) == 0x_);
    };
};
