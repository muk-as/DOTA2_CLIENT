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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLightRigLight
        {
        public:
            Vector m_vPosition; // 0x_            
            Vector m_vDirection; // 0x_            
            Vector m_vLookAt; // 0x_            
            Color m_Color; // 0x_            
            float m_flAxisScale; // 0x_            
            float m_flRadius; // 0x_            
            float m_flBrightness; // 0x_            
            float m_flLightSourceRadius; // 0x_            
            float m_flDistance; // 0x_            
            bool m_bRelativePositioning; // 0x_            
            bool m_bParentToCamera; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_vPosition) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_vDirection) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_vLookAt) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_Color) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_flAxisScale) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_flRadius) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_flBrightness) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_flLightSourceRadius) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_flDistance) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_bRelativePositioning) == 0x_);
        static_assert(offsetof(source2sdk::toolscene::CLightRigLight, m_bParentToCamera) == 0x_);
        
        static_assert(sizeof(source2sdk::toolscene::CLightRigLight) == 0x_);
    };
};
