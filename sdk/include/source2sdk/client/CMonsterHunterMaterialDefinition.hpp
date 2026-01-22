#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EMonsterHunterMaterialRarity.hpp"
#include "source2sdk/client/MonsterHunterMaterialID_t.hpp"

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
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CMonsterHunterMaterialDefinition
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "_editor/next_id_material"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::MonsterHunterMaterialID_t m_unID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription
            CUtlString m_strName; // 0x_            
            // metadata: MPropertyDescription
            source2sdk::client::EMonsterHunterMaterialRarity m_eRarity; // 0x_            
            bool m_bUniversal; // 0x_            
            bool m_bHidden; // 0x_            
            bool m_bDeprecated; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_unID) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_strName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_eRarity) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_bUniversal) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_bHidden) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_bDeprecated) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterMaterialDefinition) == 0x_);
    };
};
