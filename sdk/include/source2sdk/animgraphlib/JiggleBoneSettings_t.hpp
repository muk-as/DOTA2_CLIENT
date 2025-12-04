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
        struct JiggleBoneSettings_t
        {
        public:
            std::int32_t m_nBoneIndex; // 0x_            
            float m_flSpringStrength; // 0x_            
            float m_flMaxTimeStep; // 0x_            
            float m_flDamping; // 0x_            
            Vector m_vBoundsMaxLS; // 0x_            
            Vector m_vBoundsMinLS; // 0x_            
            source2sdk::animgraphlib::JiggleBoneSimSpace m_eSimSpace; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_nBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_flSpringStrength) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_flMaxTimeStep) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_flDamping) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_vBoundsMaxLS) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_vBoundsMinLS) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::JiggleBoneSettings_t, m_eSimSpace) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::JiggleBoneSettings_t) == 0x_);
    };
};
