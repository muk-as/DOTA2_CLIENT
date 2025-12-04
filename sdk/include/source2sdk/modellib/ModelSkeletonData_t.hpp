#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ModelSkeletonData_t
        {
        public:
            // m_boneName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_boneName;
            char m_boneName[0x_]; // 0x_            
            // m_nParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_nParent;
            char m_nParent[0x_]; // 0x_            
            // m_boneSphere has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_boneSphere;
            char m_boneSphere[0x_]; // 0x_            
            // m_nFlag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_nFlag;
            char m_nFlag[0x_]; // 0x_            
            // m_bonePosParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_bonePosParent;
            char m_bonePosParent[0x_]; // 0x_            
            // m_boneRotParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<QuaternionStorage> m_boneRotParent;
            char m_boneRotParent[0x_]; // 0x_            
            // m_boneScaleParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_boneScaleParent;
            char m_boneScaleParent[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::ModelSkeletonData_t, m_boneName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelSkeletonData_t, m_nParent) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelSkeletonData_t, m_boneSphere) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelSkeletonData_t, m_nFlag) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelSkeletonData_t, m_bonePosParent) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelSkeletonData_t, m_boneRotParent) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelSkeletonData_t, m_boneScaleParent) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::ModelSkeletonData_t) == 0x_);
    };
};
