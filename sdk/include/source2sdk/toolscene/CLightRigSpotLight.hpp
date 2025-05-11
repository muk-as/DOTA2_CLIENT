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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x4c
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLightRigSpotLight : public source2sdk::toolscene::CLightRigLight
        {
        public:
            float m_flOuterConeAngle; // 0x40            
            float m_flInnerConeAngle; // 0x44            
            bool m_bCastShadows; // 0x48            
            uint8_t _pad0049[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLightRigSpotLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::toolscene::CLightRigSpotLight) == 0x4c);
    };
};
