#pragma once
#include "source2sdk/animgraphlib/JiggleBoneSettings_t.hpp"
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
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct JiggleBoneSettingsList_t
    {
    public:
        // m_boneSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::JiggleBoneSettings_t> m_boneSettings;
        char m_boneSettings[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(JiggleBoneSettingsList_t, m_boneSettings) == 0x0);
    
    static_assert(sizeof(JiggleBoneSettingsList_t) == 0x18);
};
