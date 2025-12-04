#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RnShapeDesc_t
        {
        public:
            std::uint32_t m_nCollisionAttributeIndex; // 0x_            
            std::uint32_t m_nSurfacePropertyIndex; // 0x_            
            CUtlString m_UserFriendlyName; // 0x_            
            bool m_bUserFriendlyNameSealed; // 0x_            
            bool m_bUserFriendlyNameLong; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_nToolMaterialHash; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_nCollisionAttributeIndex) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_nSurfacePropertyIndex) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_UserFriendlyName) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_bUserFriendlyNameSealed) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_bUserFriendlyNameLong) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_nToolMaterialHash) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::RnShapeDesc_t) == 0x_);
    };
};
