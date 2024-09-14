#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Body Group Setting"
    // static metadata: MPropertyElementNameFn
    #pragma pack(push, 1)
    class CBodyGroupSetting
    {
    public:
        // metadata: MPropertyFriendlyName "BodyGroup"
        // metadata: MPropertyAttributeChoiceName "BodyGroup"
        // metadata: MPropertyAutoRebuildOnChange
        CUtlString m_BodyGroupName; // 0x0        
        // metadata: MPropertyFriendlyName "BodyGroup Option"
        // metadata: MPropertyAttributeChoiceName "BodyGroupOption"
        // metadata: MPropertyAttrExtraInfoFn
        int32_t m_nBodyGroupOption; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBodyGroupSetting, m_BodyGroupName) == 0x0);
    static_assert(offsetof(CBodyGroupSetting, m_nBodyGroupOption) == 0x8);
    
    static_assert(sizeof(CBodyGroupSetting) == 0x10);
};
