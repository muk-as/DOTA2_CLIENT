#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_NormalOffset : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "offset min"
            // metadata: MVectorIsCoordinate
            Vector m_OffsetMin; // 0x_            
            // metadata: MPropertyFriendlyName "offset max"
            // metadata: MVectorIsCoordinate
            Vector m_OffsetMax; // 0x_            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "offset in local space 0/1"
            bool m_bLocalCoords; // 0x_            
            // metadata: MPropertyFriendlyName "normalize output 0/1"
            bool m_bNormalize; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_NormalOffset because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_NormalOffset) == 0x_);
    };
};
