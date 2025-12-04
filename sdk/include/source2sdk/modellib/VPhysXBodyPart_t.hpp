#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/VPhysics2ShapeDef_t.hpp"

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
        struct VPhysXBodyPart_t
        {
        public:
            std::uint32_t m_nFlags; // 0x_            
            float m_flMass; // 0x_            
            source2sdk::modellib::VPhysics2ShapeDef_t m_rnShape; // 0x_            
            std::uint16_t m_nCollisionAttributeIndex; // 0x_            
            std::uint16_t m_nReserved; // 0x_            
            float m_flInertiaScale; // 0x_            
            float m_flLinearDamping; // 0x_            
            float m_flAngularDamping; // 0x_            
            float m_flLinearDrag; // 0x_            
            float m_flAngularDrag; // 0x_            
            bool m_bOverrideMassCenter; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vMassCenterOverride; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_flMass) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_rnShape) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_nCollisionAttributeIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_nReserved) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_flInertiaScale) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_flLinearDamping) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_flAngularDamping) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_flLinearDrag) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_flAngularDrag) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_bOverrideMassCenter) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXBodyPart_t, m_vMassCenterOverride) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::VPhysXBodyPart_t) == 0x_);
    };
};
