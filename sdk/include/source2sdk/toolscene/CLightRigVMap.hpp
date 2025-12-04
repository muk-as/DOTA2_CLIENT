#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/worldrenderer/InfoForResourceTypeVMapResourceData_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: toolscene
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace toolscene
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLightRigVMap
        {
        public:
            // m_MapName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::worldrenderer::InfoForResourceTypeVMapResourceData_t>> m_MapName;
            char m_MapName[0x_]; // 0x_            
            bool m_bRender3DSkybox; // 0x_            
            bool m_bParticlesTraceAgainstMap; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::toolscene::CLightRigVMap, m_MapName) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigVMap, m_bRender3DSkybox) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigVMap, m_bParticlesTraceAgainstMap) == 0x_);
        
        static_assert(sizeof(source2sdk::toolscene::CLightRigVMap) == 0x_);
    };
};
