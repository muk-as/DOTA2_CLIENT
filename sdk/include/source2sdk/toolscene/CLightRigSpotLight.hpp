#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/toolscene/CLightRigLight.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLightRigSpotLight : public source2sdk::toolscene::CLightRigLight
        {
        public:
            float m_flOuterConeAngle; // 0x_            
            float m_flInnerConeAngle; // 0x_            
            bool m_bCastShadows; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLightRigSpotLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::toolscene::CLightRigSpotLight) == 0x_);
    };
};
