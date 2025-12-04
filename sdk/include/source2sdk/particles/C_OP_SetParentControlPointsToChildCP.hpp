#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"

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
        class C_OP_SetParentControlPointsToChildCP : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "group ID to affect"
            std::int32_t m_nChildGroupID; // 0x_            
            // metadata: MPropertyFriendlyName "control point to set"
            std::int32_t m_nChildControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "# of children to set"
            std::int32_t m_nNumControlPoints; // 0x_            
            // metadata: MPropertyFriendlyName "first parent control point to set from"
            std::int32_t m_nFirstSourcePoint; // 0x_            
            // metadata: MPropertyFriendlyName "set orientation"
            bool m_bSetOrientation; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetParentControlPointsToChildCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetParentControlPointsToChildCP) == 0x_);
    };
};
