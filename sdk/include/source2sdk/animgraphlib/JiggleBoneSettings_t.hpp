#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/JiggleBoneSimSpace.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x2c
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct JiggleBoneSettings_t
        {
        public:
            std::int32_t m_nBoneIndex; // 0x0            
            float m_flSpringStrength; // 0x4            
            float m_flMaxTimeStep; // 0x8            
            float m_flDamping; // 0xc            
            Vector m_vBoundsMaxLS; // 0x10            
            Vector m_vBoundsMinLS; // 0x1c            
            source2sdk::animgraphlib::JiggleBoneSimSpace m_eSimSpace; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_nBoneIndex) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_flSpringStrength) == 0x4);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_flMaxTimeStep) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_flDamping) == 0xc);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_vBoundsMaxLS) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_vBoundsMinLS) == 0x1c);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_eSimSpace) == 0x28);
        
        static_assert(sizeof(source2sdk::animgraphlib::JiggleBoneSettings_t) == 0x2c);
    };
};
