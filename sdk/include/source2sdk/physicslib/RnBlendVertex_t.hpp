#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        struct RnBlendVertex_t
        {
        public:
            std::uint16_t m_nWeight0; // 0x_            
            std::uint16_t m_nIndex0; // 0x_            
            std::uint16_t m_nWeight1; // 0x_            
            std::uint16_t m_nIndex1; // 0x_            
            std::uint16_t m_nWeight2; // 0x_            
            std::uint16_t m_nIndex2; // 0x_            
            std::uint16_t m_nFlags; // 0x_            
            std::uint16_t m_nTargetIndex; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::RnBlendVertex_t, m_nWeight0) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBlendVertex_t, m_nIndex0) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBlendVertex_t, m_nWeight1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBlendVertex_t, m_nIndex1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBlendVertex_t, m_nWeight2) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBlendVertex_t, m_nIndex2) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBlendVertex_t, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBlendVertex_t, m_nTargetIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::RnBlendVertex_t) == 0x_);
    };
};
