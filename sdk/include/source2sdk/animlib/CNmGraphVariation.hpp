#pragma once
#include "source2sdk/animlib/CNmGraphDataSet.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x50
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmGraphVariation
    {
    public:
        // m_graphDefinition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_graphDefinition;
        char m_graphDefinition[0x8]; // 0x0        
        animlib::CNmGraphDataSet m_dataSet; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmGraphVariation, m_graphDefinition) == 0x0);
    static_assert(offsetof(CNmGraphVariation, m_dataSet) == 0x8);
    
    static_assert(sizeof(CNmGraphVariation) == 0x50);
};
