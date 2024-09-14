#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x40
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPathParameters
    {
    public:
        // metadata: MPropertyFriendlyName "start control point number"
        int32_t m_nStartControlPointNumber; // 0x0        
        // metadata: MPropertyFriendlyName "end control point number"
        int32_t m_nEndControlPointNumber; // 0x4        
        // metadata: MPropertyFriendlyName "bulge control 0=random 1=orientation of start pnt 2=orientation of end point"
        int32_t m_nBulgeControl; // 0x8        
        // metadata: MPropertyFriendlyName "random bulge"
        float m_flBulge; // 0xc        
        // metadata: MPropertyFriendlyName "mid point position"
        float m_flMidPoint; // 0x10        
        // metadata: MPropertyFriendlyName "Offset from curve start point for path start"
        // metadata: MVectorIsCoordinate
        Vector m_vStartPointOffset; // 0x14        
        // metadata: MPropertyFriendlyName "Offset from curve midpoint for curve center"
        // metadata: MVectorIsCoordinate
        Vector m_vMidPointOffset; // 0x20        
        // metadata: MPropertyFriendlyName "Offset from control point for path end"
        // metadata: MVectorIsCoordinate
        Vector m_vEndOffset; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x38[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPathParameters, m_nStartControlPointNumber) == 0x0);
    static_assert(offsetof(CPathParameters, m_nEndControlPointNumber) == 0x4);
    static_assert(offsetof(CPathParameters, m_nBulgeControl) == 0x8);
    static_assert(offsetof(CPathParameters, m_flBulge) == 0xc);
    static_assert(offsetof(CPathParameters, m_flMidPoint) == 0x10);
    static_assert(offsetof(CPathParameters, m_vStartPointOffset) == 0x14);
    static_assert(offsetof(CPathParameters, m_vMidPointOffset) == 0x20);
    static_assert(offsetof(CPathParameters, m_vEndOffset) == 0x2c);
    
    static_assert(sizeof(CPathParameters) == 0x40);
};
