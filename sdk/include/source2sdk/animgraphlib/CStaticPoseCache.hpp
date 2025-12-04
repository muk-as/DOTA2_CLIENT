#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CCachedPose.hpp"

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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CStaticPoseCache
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_poses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CCachedPose> m_poses;
            char m_poses[0x_]; // 0x_            
            std::int32_t m_nBoneCount; // 0x_            
            std::int32_t m_nMorphCount; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CStaticPoseCache, m_poses) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CStaticPoseCache, m_nBoneCount) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CStaticPoseCache, m_nMorphCount) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CStaticPoseCache) == 0x_);
    };
};
