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
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLightRigExposure
        {
        public:
            bool m_bEnabled; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            float m_flMinEV; // 0x4            
            float m_flMaxEV; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::toolscene::CLightRigExposure, m_bEnabled) == 0x0);
        static_assert(offsetof(source2sdk::toolscene::CLightRigExposure, m_flMinEV) == 0x4);
        static_assert(offsetof(source2sdk::toolscene::CLightRigExposure, m_flMaxEV) == 0x8);
        
        static_assert(sizeof(source2sdk::toolscene::CLightRigExposure) == 0xc);
    };
};
