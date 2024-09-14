#pragma once
#include "source2sdk/soundsystem/CSosSoundEventGroupSchema.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSosSoundEventGroupListSchema
    {
    public:
        // metadata: MPropertyAutoExpandSelf
        // metadata: MPropertyFriendlyName "Groups"
        // m_groupList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<soundsystem::CSosSoundEventGroupSchema> m_groupList;
        char m_groupList[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSosSoundEventGroupListSchema, m_groupList) == 0x0);
    
    static_assert(sizeof(CSosSoundEventGroupListSchema) == 0x18);
};
