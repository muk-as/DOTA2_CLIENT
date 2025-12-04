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
        class CHitBox
        {
        public:
            CUtlString m_name; // 0x_            
            CUtlString m_sSurfaceProperty; // 0x_            
            CUtlString m_sBoneName; // 0x_            
            Vector m_vMinBounds; // 0x_            
            Vector m_vMaxBounds; // 0x_            
            float m_flShapeRadius; // 0x_            
            std::uint32_t m_nBoneNameHash; // 0x_            
            std::int32_t m_nGroupId; // 0x_            
            std::uint8_t m_nShapeType; // 0x_            
            bool m_bTranslationOnly; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_CRC; // 0x_            
            Color m_cRenderColor; // 0x_            
            std::uint16_t m_nHitBoxIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_name) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_sSurfaceProperty) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_sBoneName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_vMinBounds) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_vMaxBounds) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_flShapeRadius) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_nBoneNameHash) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_nGroupId) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_nShapeType) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_bTranslationOnly) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_CRC) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_cRenderColor) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBox, m_nHitBoxIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CHitBox) == 0x_);
    };
};
