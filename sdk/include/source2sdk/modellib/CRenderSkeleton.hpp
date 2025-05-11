#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/RenderSkeletonBone_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRenderSkeleton
        {
        public:
            // m_bones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::RenderSkeletonBone_t> m_bones;
            char m_bones[0x18]; // 0x0            
            uint8_t _pad0018[0x18]; // 0x18
            // m_boneParents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_boneParents;
            char m_boneParents[0x18]; // 0x30            
            std::int32_t m_nBoneWeightCount; // 0x48            
            uint8_t _pad004c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CRenderSkeleton, m_bones) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CRenderSkeleton, m_boneParents) == 0x30);
        static_assert(offsetof(source2sdk::modellib::CRenderSkeleton, m_nBoneWeightCount) == 0x48);
        
        static_assert(sizeof(source2sdk::modellib::CRenderSkeleton) == 0x50);
    };
};
