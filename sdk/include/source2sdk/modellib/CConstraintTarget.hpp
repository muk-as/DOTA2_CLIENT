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
        class CConstraintTarget
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            Quaternion m_qOffset; // 0x_            
            Vector m_vOffset; // 0x_            
            std::uint32_t m_nBoneHash; // 0x_            
            CUtlString m_sName; // 0x_            
            float m_flWeight; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bIsAttachment; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CConstraintTarget, m_qOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CConstraintTarget, m_vOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CConstraintTarget, m_nBoneHash) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CConstraintTarget, m_sName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CConstraintTarget, m_flWeight) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CConstraintTarget, m_bIsAttachment) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CConstraintTarget) == 0x_);
    };
};
