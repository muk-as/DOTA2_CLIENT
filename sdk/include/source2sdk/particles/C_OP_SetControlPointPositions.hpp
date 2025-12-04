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
        class C_OP_SetControlPointPositions : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "set positions in world space"
            bool m_bUseWorldLocation; // 0x_            
            // metadata: MPropertyFriendlyName "inherit CP orientation"
            bool m_bOrient; // 0x_            
            // metadata: MPropertyFriendlyName "only set position once"
            bool m_bSetOnce; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "first control point number"
            std::int32_t m_nCP1; // 0x_            
            // metadata: MPropertyFriendlyName "second control point number"
            std::int32_t m_nCP2; // 0x_            
            // metadata: MPropertyFriendlyName "third control point number"
            std::int32_t m_nCP3; // 0x_            
            // metadata: MPropertyFriendlyName "fourth control point number"
            std::int32_t m_nCP4; // 0x_            
            // metadata: MPropertyFriendlyName "first control point location"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP1Pos; // 0x_            
            // metadata: MPropertyFriendlyName "second control point location"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP2Pos; // 0x_            
            // metadata: MPropertyFriendlyName "third control point location"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP3Pos; // 0x_            
            // metadata: MPropertyFriendlyName "fourth control point location"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP4Pos; // 0x_            
            // metadata: MPropertyFriendlyName "control point to offset positions from"
            std::int32_t m_nHeadLocation; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointPositions because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointPositions) == 0x_);
    };
};
