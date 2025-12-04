#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSosSoundEventGroupSchema.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: M_LEGACY_OptInToSchemaPropertyDomain
        #pragma pack(push, 1)
        class CSosSoundEventGroupListSchema
        {
        public:
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertyFriendlyName "Groups"
            // m_groupList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::CSosSoundEventGroupSchema> m_groupList;
            char m_groupList[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupListSchema, m_groupList) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem::CSosSoundEventGroupListSchema) == 0x_);
    };
};
