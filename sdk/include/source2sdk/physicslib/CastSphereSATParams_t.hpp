#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    struct RnHull_t;
};

namespace source2sdk::physicslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x30
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CastSphereSATParams_t
    {
    public:
        Vector m_vRayStart; // 0x0        
        Vector m_vRayDelta; // 0xc        
        float m_flRadius; // 0x18        
        float m_flMaxFraction; // 0x1c        
        float m_flScale; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4]; // 0x24
        physicslib::RnHull_t* m_pHull; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CastSphereSATParams_t, m_vRayStart) == 0x0);
    static_assert(offsetof(CastSphereSATParams_t, m_vRayDelta) == 0xc);
    static_assert(offsetof(CastSphereSATParams_t, m_flRadius) == 0x18);
    static_assert(offsetof(CastSphereSATParams_t, m_flMaxFraction) == 0x1c);
    static_assert(offsetof(CastSphereSATParams_t, m_flScale) == 0x20);
    static_assert(offsetof(CastSphereSATParams_t, m_pHull) == 0x28);
    
    static_assert(sizeof(CastSphereSATParams_t) == 0x30);
};
