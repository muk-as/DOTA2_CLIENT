#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPathParameters
        {
        public:
            // metadata: MPropertyFriendlyName "start control point number"
            std::int32_t m_nStartControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "end control point number"
            std::int32_t m_nEndControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "bulge control 0=random 1=orientation of start pnt 2=orientation of end point"
            std::int32_t m_nBulgeControl; // 0x_            
            // metadata: MPropertyFriendlyName "random bulge"
            float m_flBulge; // 0x_            
            // metadata: MPropertyFriendlyName "mid point position"
            float m_flMidPoint; // 0x_            
            // metadata: MPropertyFriendlyName "Offset from curve start point for path start"
            // metadata: MVectorIsCoordinate
            Vector m_vStartPointOffset; // 0x_            
            // metadata: MPropertyFriendlyName "Offset from curve midpoint for curve center"
            // metadata: MVectorIsCoordinate
            Vector m_vMidPointOffset; // 0x_            
            // metadata: MPropertyFriendlyName "Offset from control point for path end"
            // metadata: MVectorIsCoordinate
            Vector m_vEndOffset; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::CPathParameters, m_nStartControlPointNumber) == 0x_);
        static_assert(offsetof(source2sdk::particles::CPathParameters, m_nEndControlPointNumber) == 0x_);
        static_assert(offsetof(source2sdk::particles::CPathParameters, m_nBulgeControl) == 0x_);
        static_assert(offsetof(source2sdk::particles::CPathParameters, m_flBulge) == 0x_);
        static_assert(offsetof(source2sdk::particles::CPathParameters, m_flMidPoint) == 0x_);
        static_assert(offsetof(source2sdk::particles::CPathParameters, m_vStartPointOffset) == 0x_);
        static_assert(offsetof(source2sdk::particles::CPathParameters, m_vMidPointOffset) == 0x_);
        static_assert(offsetof(source2sdk::particles::CPathParameters, m_vEndOffset) == 0x_);
        
        static_assert(sizeof(source2sdk::particles::CPathParameters) == 0x_);
    };
};
