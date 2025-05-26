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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RnShapeDesc_t
        {
        public:
            std::uint32_t m_nCollisionAttributeIndex; // 0x0            
            std::uint32_t m_nSurfacePropertyIndex; // 0x4            
            CUtlString m_UserFriendlyName; // 0x8            
            bool m_bUserFriendlyNameSealed; // 0x10            
            bool m_bUserFriendlyNameLong; // 0x11            
            uint8_t _pad0012[0x2]; // 0x12
            std::uint32_t m_nToolMaterialHash; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_nCollisionAttributeIndex) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_nSurfacePropertyIndex) == 0x4);
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_UserFriendlyName) == 0x8);
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_bUserFriendlyNameSealed) == 0x10);
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_bUserFriendlyNameLong) == 0x11);
        static_assert(offsetof(source2sdk::physicslib::RnShapeDesc_t, m_nToolMaterialHash) == 0x14);
        
        static_assert(sizeof(source2sdk::physicslib::RnShapeDesc_t) == 0x18);
    };
};
