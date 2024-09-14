#pragma once
#include "source2sdk/animgraphlib/CAnimGraphSettingsGroup.hpp"
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
    // Size: 0x30
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimGraphSettingsManager
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        // m_settingsGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSmartPtr<animgraphlib::CAnimGraphSettingsGroup>> m_settingsGroups;
        char m_settingsGroups[0x18]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimGraphSettingsManager, m_settingsGroups) == 0x18);
    
    static_assert(sizeof(CAnimGraphSettingsManager) == 0x30);
};
