#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: toolscene
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace toolscene
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x40
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLightRigLight
        {
        public:
            Vector m_vPosition; // 0x0            
            Vector m_vDirection; // 0xc            
            Vector m_vLookAt; // 0x18            
            Color m_Color; // 0x24            
            float m_flAxisScale; // 0x28            
            float m_flRadius; // 0x2c            
            float m_flBrightness; // 0x30            
            float m_flLightSourceRadius; // 0x34            
            float m_flDistance; // 0x38            
            bool m_bRelativePositioning; // 0x3c            
            bool m_bParentToCamera; // 0x3d            
            uint8_t _pad003e[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_vPosition) == 0x0);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_vDirection) == 0xc);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_vLookAt) == 0x18);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_Color) == 0x24);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_flAxisScale) == 0x28);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_flRadius) == 0x2c);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_flBrightness) == 0x30);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_flLightSourceRadius) == 0x34);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_flDistance) == 0x38);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_bRelativePositioning) == 0x3c);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_bParentToCamera) == 0x3d);
        
        static_assert(sizeof(source2sdk::toolscene::CLightRigLight) == 0x40);
    };
};
