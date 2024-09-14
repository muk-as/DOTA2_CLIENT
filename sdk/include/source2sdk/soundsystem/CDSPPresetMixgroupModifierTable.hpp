#pragma once
#include "source2sdk/soundsystem/CDspPresetModifierList.hpp"
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
    // static metadata: MVDataRoot
    // static metadata: MVDataNodeType "1"
    #pragma pack(push, 1)
    class CDSPPresetMixgroupModifierTable
    {
    public:
        // metadata: MPropertyDescription "Table of mixgroup modifiers for effect names."
        // metadata: MPropertyFriendlyName "Modifier Table"
        // m_table has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<soundsystem::CDspPresetModifierList> m_table;
        char m_table[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDSPPresetMixgroupModifierTable, m_table) == 0x0);
    
    static_assert(sizeof(CDSPPresetMixgroupModifierTable) == 0x18);
};
