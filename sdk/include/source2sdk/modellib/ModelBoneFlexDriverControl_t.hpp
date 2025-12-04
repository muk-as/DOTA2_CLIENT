#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/ModelBoneFlexComponent_t.hpp"

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
        struct ModelBoneFlexDriverControl_t
        {
        public:
            source2sdk::modellib::ModelBoneFlexComponent_t m_nBoneComponent; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_flexController; // 0x_            
            std::uint32_t m_flexControllerToken; // 0x_            
            float m_flMin; // 0x_            
            float m_flMax; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::ModelBoneFlexDriverControl_t, m_nBoneComponent) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelBoneFlexDriverControl_t, m_flexController) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelBoneFlexDriverControl_t, m_flexControllerToken) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelBoneFlexDriverControl_t, m_flMin) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelBoneFlexDriverControl_t, m_flMax) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::ModelBoneFlexDriverControl_t) == 0x_);
    };
};
