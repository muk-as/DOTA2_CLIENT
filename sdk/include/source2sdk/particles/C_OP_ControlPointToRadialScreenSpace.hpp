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
        class C_OP_ControlPointToRadialScreenSpace : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "source Control Point in World"
            std::int32_t m_nCPIn; // 0x_            
            // metadata: MPropertyFriendlyName "Source Control Point offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP1Pos; // 0x_            
            // metadata: MPropertyFriendlyName "Set control point number"
            std::int32_t m_nCPOut; // 0x_            
            // metadata: MPropertyFriendlyName "Output field 0-2 X/Y/Z"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nCPOutField; // 0x_            
            // metadata: MPropertyFriendlyName "Ss Pos and Dot OUT CP"
            std::int32_t m_nCPSSPosOut; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ControlPointToRadialScreenSpace because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ControlPointToRadialScreenSpace) == 0x_);
    };
};
