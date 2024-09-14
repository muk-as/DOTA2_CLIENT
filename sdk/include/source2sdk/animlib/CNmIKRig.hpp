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
    // Size: 0x8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmIKRig
    {
    public:
        // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
        char m_skeleton[0x8]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmIKRig, m_skeleton) == 0x0);
    
    static_assert(sizeof(CNmIKRig) == 0x8);
};
