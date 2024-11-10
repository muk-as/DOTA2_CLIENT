#pragma once
#include "source2sdk/worldrenderer/InfoForResourceTypeVMapResourceData_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: toolscene
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::toolscene
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xe8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CLightRigVMap
    {
    public:
        // m_MapName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<worldrenderer::InfoForResourceTypeVMapResourceData_t>> m_MapName;
        char m_MapName[0xe0]; // 0x0        
        bool m_bRender3DSkybox; // 0xe0        
        bool m_bParticlesTraceAgainstMap; // 0xe1        
        [[maybe_unused]] std::uint8_t pad_0xe2[0x6];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CLightRigVMap, m_MapName) == 0x0);
    static_assert(offsetof(CLightRigVMap, m_bRender3DSkybox) == 0xe0);
    static_assert(offsetof(CLightRigVMap, m_bParticlesTraceAgainstMap) == 0xe1);
    
    static_assert(sizeof(CLightRigVMap) == 0xe8);
};
