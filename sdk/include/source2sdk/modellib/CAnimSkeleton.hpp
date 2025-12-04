#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CAnimFoot.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
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
        class CAnimSkeleton
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_localSpaceTransforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_localSpaceTransforms;
            char m_localSpaceTransforms[0x_]; // 0x_            
            // m_modelSpaceTransforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_modelSpaceTransforms;
            char m_modelSpaceTransforms[0x_]; // 0x_            
            // m_boneNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_boneNames;
            char m_boneNames[0x_]; // 0x_            
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlVector<std::int32_t>> m_children;
            char m_children[0x_]; // 0x_            
            // m_parents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_parents;
            char m_parents[0x_]; // 0x_            
            // m_feet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CAnimFoot> m_feet;
            char m_feet[0x_]; // 0x_            
            // m_morphNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_morphNames;
            char m_morphNames[0x_]; // 0x_            
            // m_lodBoneCounts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_lodBoneCounts;
            char m_lodBoneCounts[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CAnimSkeleton, m_localSpaceTransforms) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimSkeleton, m_modelSpaceTransforms) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimSkeleton, m_boneNames) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimSkeleton, m_children) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimSkeleton, m_parents) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimSkeleton, m_feet) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimSkeleton, m_morphNames) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimSkeleton, m_lodBoneCounts) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CAnimSkeleton) == 0x_);
    };
};
