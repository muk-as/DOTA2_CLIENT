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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CStaticPoseCache
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // m_poses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CCachedPose> m_poses;
            char m_poses[0x18]; // 0x10            
            std::int32_t m_nBoneCount; // 0x28            
            std::int32_t m_nMorphCount; // 0x2c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CStaticPoseCache, m_poses) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CStaticPoseCache, m_nBoneCount) == 0x28);
        static_assert(offsetof(source2sdk::animgraphlib::CStaticPoseCache, m_nMorphCount) == 0x2c);
        
        static_assert(sizeof(source2sdk::animgraphlib::CStaticPoseCache) == 0x30);
    };
};
