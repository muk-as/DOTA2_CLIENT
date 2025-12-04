#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace physicslib
    {
        struct RnHull_t;
    };
};

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CastSphereSATParams_t
        {
        public:
            Vector m_vRayStart; // 0x_            
            Vector m_vRayDelta; // 0x_            
            float m_flRadius; // 0x_            
            float m_flMaxFraction; // 0x_            
            float m_flScale; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::physicslib::RnHull_t* m_pHull; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::CastSphereSATParams_t, m_vRayStart) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CastSphereSATParams_t, m_vRayDelta) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CastSphereSATParams_t, m_flRadius) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CastSphereSATParams_t, m_flMaxFraction) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CastSphereSATParams_t, m_flScale) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CastSphereSATParams_t, m_pHull) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::CastSphereSATParams_t) == 0x_);
    };
};
