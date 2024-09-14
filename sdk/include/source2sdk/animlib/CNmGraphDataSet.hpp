#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"
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
    // Size: 0x48
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmGraphDataSet
    {
    public:
        CGlobalSymbol m_variationID; // 0x0        
        // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
        char m_skeleton[0x8]; // 0x8        
        // m_resources has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandleVoid> m_resources;
        char m_resources[0x18]; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x28[0x20];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmGraphDataSet, m_variationID) == 0x0);
    static_assert(offsetof(CNmGraphDataSet, m_skeleton) == 0x8);
    static_assert(offsetof(CNmGraphDataSet, m_resources) == 0x10);
    
    static_assert(sizeof(CNmGraphDataSet) == 0x48);
};
