#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/ModelBoneFlexDriverControl_t.hpp"

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
        struct ModelBoneFlexDriver_t
        {
        public:
            CUtlString m_boneName; // 0x_            
            std::uint32_t m_boneNameToken; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_controls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::ModelBoneFlexDriverControl_t> m_controls;
            char m_controls[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::ModelBoneFlexDriver_t, m_boneName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelBoneFlexDriver_t, m_boneNameToken) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelBoneFlexDriver_t, m_controls) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::ModelBoneFlexDriver_t) == 0x_);
    };
};
