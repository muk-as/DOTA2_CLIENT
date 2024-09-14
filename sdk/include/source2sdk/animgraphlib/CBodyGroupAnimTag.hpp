#pragma once
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
#include "source2sdk/animgraphlib/CBodyGroupSetting.hpp"
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
    // Standard-layout class: false
    // Size: 0x78
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Body Group Tag"
    #pragma pack(push, 1)
    class CBodyGroupAnimTag : public animgraphlib::CAnimTagBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x50[0x8]; // 0x50
        // metadata: MPropertyFriendlyName "Priority"
        int32_t m_nPriority; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4]; // 0x5c
        // metadata: MPropertyFriendlyName "Body Group Settings"
        // m_bodyGroupSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CBodyGroupSetting> m_bodyGroupSettings;
        char m_bodyGroupSettings[0x18]; // 0x60        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBodyGroupAnimTag because it is not a standard-layout class
    static_assert(sizeof(CBodyGroupAnimTag) == 0x78);
};
