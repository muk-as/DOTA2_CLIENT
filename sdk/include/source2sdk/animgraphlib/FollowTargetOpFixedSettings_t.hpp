#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FollowTargetOpFixedSettings_t
        {
        public:
            std::int32_t m_boneIndex; // 0x_            
            bool m_bBoneTarget; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_boneTargetIndex; // 0x_            
            bool m_bWorldCoodinateTarget; // 0x_            
            bool m_bMatchTargetOrientation; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::FollowTargetOpFixedSettings_t, m_boneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FollowTargetOpFixedSettings_t, m_bBoneTarget) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FollowTargetOpFixedSettings_t, m_boneTargetIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FollowTargetOpFixedSettings_t, m_bWorldCoodinateTarget) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FollowTargetOpFixedSettings_t, m_bMatchTargetOrientation) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::FollowTargetOpFixedSettings_t) == 0x_);
    };
};
