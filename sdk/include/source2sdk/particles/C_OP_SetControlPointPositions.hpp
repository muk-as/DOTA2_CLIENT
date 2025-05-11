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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x210
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetControlPointPositions : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "set positions in world space"
            bool m_bUseWorldLocation; // 0x1c8            
            // metadata: MPropertyFriendlyName "inherit CP orientation"
            bool m_bOrient; // 0x1c9            
            // metadata: MPropertyFriendlyName "only set position once"
            bool m_bSetOnce; // 0x1ca            
            uint8_t _pad01cb[0x1]; // 0x1cb
            // metadata: MPropertyFriendlyName "first control point number"
            std::int32_t m_nCP1; // 0x1cc            
            // metadata: MPropertyFriendlyName "second control point number"
            std::int32_t m_nCP2; // 0x1d0            
            // metadata: MPropertyFriendlyName "third control point number"
            std::int32_t m_nCP3; // 0x1d4            
            // metadata: MPropertyFriendlyName "fourth control point number"
            std::int32_t m_nCP4; // 0x1d8            
            // metadata: MPropertyFriendlyName "first control point location"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP1Pos; // 0x1dc            
            // metadata: MPropertyFriendlyName "second control point location"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP2Pos; // 0x1e8            
            // metadata: MPropertyFriendlyName "third control point location"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP3Pos; // 0x1f4            
            // metadata: MPropertyFriendlyName "fourth control point location"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP4Pos; // 0x200            
            // metadata: MPropertyFriendlyName "control point to offset positions from"
            std::int32_t m_nHeadLocation; // 0x20c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointPositions because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointPositions) == 0x210);
    };
};
