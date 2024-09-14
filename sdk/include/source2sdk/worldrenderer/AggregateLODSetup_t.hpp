#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AggregateLODSetup_t
    {
    public:
        Vector m_vLODOrigin; // 0x0        
        float m_fMaxObjectScale; // 0xc        
        // m_fSwitchDistances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_fSwitchDistances;
        char m_fSwitchDistances[0x18]; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AggregateLODSetup_t, m_vLODOrigin) == 0x0);
    static_assert(offsetof(AggregateLODSetup_t, m_fMaxObjectScale) == 0xc);
    static_assert(offsetof(AggregateLODSetup_t, m_fSwitchDistances) == 0x10);
    
    static_assert(sizeof(AggregateLODSetup_t) == 0x28);
};
